#include <iostream>
#include <vector>

using namespace std;

int _vector()
{
	vector<int> num1;
	vector<int> num2;
	int size1, size2, i;

	num1.push_back(1);
	num1.push_back(2);
	num1.push_back(3);
	num1.push_back(4);
	num1.push_back(5);
	num1[3] = 20; // isso é válido
	/*num[4] = 20;*/ // isso dá erro

	num2.push_back(6);
	num2.push_back(7);
	num2.push_back(8);
	num2.push_back(9);
	num2.push_back(10);

	//num1.swap(num2);

	num1.insert(num1.begin(), 888);
	num1.insert(num1.end(), 888);

	/*num1.erase(num1.end());
	num1.erase(num1.begin());*/

	size1 = num1.size();
	size2 = num2.size();

	cout << "Primeiro elemento do vector num1: " << num1.front() << endl;
	cout << "Último elemento do vector num1: " << num1.back() << endl;
	cout << "Elemento central do vector num1: " << num1.at(size1 / 2) << endl;

	cout << "Tamanho do vector num1: " << size1 << endl;

	for (int i = 0; i < size1; i++)
	{
		cout << num1[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < size2; i++)
	{
		cout << num2[i] << " ";
	}

	cout << endl;

	while (!num1.empty())
	{
		num1.pop_back();
	}

	cout << "Novo tamanho de num1: " << num1.size() << endl;
	return 0;
}