#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int filestream1()
{
	// Ofstream and ifstream
	ofstream file;

	file.open("foo.txt", ios::app);
    file << "Se o Boulos não ganhar a eleição é só invadir a sede da prefeitura\n";
	file << "Se as pessoas acham que eu sou grosso, é porque não viram a minha r*la\n";

	file.close();

	ifstream fileReader;
	string lineRead;

	fileReader.open("foo.txt");

	if (fileReader.is_open())
	{
		while (getline(fileReader, lineRead))
		{
			cout << lineRead << endl;
		}
		fileReader.close();
	}
	else {
		cout << "Não foi possível abrir o arquivo" << endl;
	}

	//main2();

    return 0;
}