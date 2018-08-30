#include <iostream>

using namespace std;

int main()
{
	int nro, x;

	cout << "Digite um nro: ";
	cin >> nro;

	if (nro > 0)
	{
		x = nro * 2;
		cout << "Nro positivo, seu dobro eh: " << x << endl;
	}
	else {
		x = nro * 3;
		cout << "Nro negativo,seu triplo eh: " << x << endl;
	}
	system("pause");
	return 0;
}