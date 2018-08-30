#include <iostream>

using namespace std;


int main()
{
	double a, b, c;

	cout << "Digite o valor de A: ";
	cin >> a;
	cout << "Digite o valor de B: ";
	cin >> b;
	cout << "Digite o valor de C: ";
	cin >> c;

	if (a + b < a + c)
	{

		cout << "A soma de a+b eh menor que a+c" << endl;
		cout << "A soma de" << a << "+" << b << "eh menor que " << a << "+" << c << endl;
	}



	system("pause");
	return 0;
}