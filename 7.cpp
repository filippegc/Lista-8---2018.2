#include <iostream>
using namespace std;
int main()

{
	int nro, x;
	cout << "Digite um nro: ";
	cin >> nro;

	if (nro % 2)
	{
		x = nro + 8;
		cout << "Nro impar, a soma eh: " << x << endl;
	}
	else  
	{
		x = nro + 5;
		cout << "Nro par, a soma eh: " << x << endl;
	}

	system("pause");
	return 0;
}