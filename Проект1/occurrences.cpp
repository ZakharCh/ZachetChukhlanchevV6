#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string word1, word2, dlinnoe, korotkoe, podstr;
	int kol, dl, kor, inaidenoe = 0;
	std::vector<std::string> naidenoe;
	
	std::cout << "Neobhodimo po ocheredi vvesti dva slova i cheloe chislo." << std::endl;
	std::cout << "Vvedite pervoe slovo: ";
	std::getline(std::cin, word1);
	std::cout << "Vvedite vtoroe slovo: ";
	std::getline(std::cin, word2);
	std::cout << "Vvedite kolichestvo simvolov dlinnee kotorogo doljni bit' podstroki: ";
	std::cin >> kol;

	if (word1.size() > word2.size())
	{
		dl = word1.size();
		dlinnoe = word1;
		kor = word2.size();
		korotkoe = word2;
	}
	else
	{
		dl = word2.size();
		dlinnoe = word2;
		kor = word1.size();
		korotkoe = word1;
	}

	for (int i = kol + 1; i <= kor; i++)
		for (int j = 0; j <= dl - i; j++)
		{
			podstr = dlinnoe.substr(j, i);
			if (korotkoe.find(podstr) != std::string::npos)
			{
				naidenoe.push_back(podstr);
				inaidenoe++;
			}
		}

	for (int i = 0; i < int(naidenoe.size()) - 1; i++)
		for (int j = i + 1; j < int(naidenoe.size()); j++)
			if (naidenoe[i] == naidenoe[j])
			{
				naidenoe[i] = "0";
			}

	for (int i = 0; i < inaidenoe; i++)
		if (naidenoe[i] != "0")
			std::cout << naidenoe[i] << std::endl;

	system("pause");
	return(0);
}
