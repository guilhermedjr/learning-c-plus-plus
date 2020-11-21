#include <iostream>
#include <vector>

using namespace std;

int iterator()
{
	vector<string> products = {"banana", "melancia", "cerveja", "monitor"};
	vector<string>::iterator it;
	// auto::iterator it;

	//advance(it, 3);
	// *next
	// *prev (volta)

	//cout << *prev(it, 3) << endl;

	for (it = products.begin(); it != products.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}







