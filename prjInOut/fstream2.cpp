#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int filestream2()
{
	fstream indecisiveFile;
	char opc = 's';
	string name;
	string lineRead;

	indecisiveFile.open("foo2.txt", ios::out);

	while ((opc == 's') or (opc == 'S'))
	{
		cout << "Digite um nome: ";
		cin >> name;
		indecisiveFile << name << "\n";
		cout << "\nQuer digitar um novo nome?[s/n]";
		cin >> opc;
		system("CLS");
	}
	indecisiveFile.close();

	indecisiveFile.open("foo2.txt", ios::in);

	cout << "Nomes digitados: " << endl;

	if (indecisiveFile.is_open())
	{
		while (getline(indecisiveFile, lineRead))
		{
			cout << lineRead << endl;
		}
	}
	else {
		cout << "Não foi possível abrir o arquivo" << endl;
	}

	return 0;
}