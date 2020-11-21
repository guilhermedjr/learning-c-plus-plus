#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	int a; int b; int c; int delta;
	double x1; double x2;

	cout << "Digite o coeficiente de A:";
	cin >> a;

	cout << "Digite o coeficiente de B:";
	cin >> b;

	cout << "Digite o coeficiente de C:";
	cin >> c;

	delta = b * b - 4 * a * c;

	if (a != 0)
	{
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
		cout << "As raízes da equação são " << x1 << " e " << x2 << endl;
	}
	
	return 0;
}






