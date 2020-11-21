#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int primeNumbers()
{
	string line;
	int number;
	bool isPrime = true;

	while (true)
	{
		getline(cin, line);

		if (line == "0")
		{
			break;
		}

		number = atoi(line.c_str());
		
		for (int i = 2; i <= number; i++)
		{
			if (((number % i) == 0) && (i != number))
			{
				isPrime = false;
				break;
		    }
		}

		if (number > 1)
		{
			if (isPrime)
			{
				cout << number;
			}
		}
	}
    return 0;
}


