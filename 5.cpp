#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Digite o valor de A: ";
	cin >> a;

	cout << "Digite o valor de B: ";
	cin >> b;

	if (a == b)

	{
		cout << "Valores iguais!" << endl;
		c = a + b;
		cout << "Soma: " << c << endl;
	}

	else
	{
		cout << "Valores diferentes!" << endl;
		c = a*b;
		cout << "Multi deles: " << c << endl;
	}

	system("pause");
	return 0;
}