#include <iostream>
#include <string>
#include "FileObject.h"

using namespace std;

int main()
{
	FileObject file = FileObject();
	//file.WriteTxt("file3", "Mais um arquivo");
	cout << file.ReadTxt("file3") << endl;
	cout << file.ReadTxt("file2") << endl;
	cout << file.ReadTxt("file") << endl;
	return 0;
}