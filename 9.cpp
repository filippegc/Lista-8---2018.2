#include <iostream>
#include <math.h>
using namespace std;

int main()

{
	float imc, peso, alt;
	cout << "Digite peso: ";
	cin >> peso;

	cout << "Digite altura: ";
	cin >> alt;

	imc = peso / (alt *alt);

	if (imc<18.5)
	{
		cout << "Abaixo do peso!" << endl;
	}
	else if (imc>=18.5 && imc < 25)
	{
		cout << "Peso normal!" << endl;
	}
	else if(imc>=25 && imc<30)
	{
		cout << "Acima do peso!" << endl;
	}
	else if (imc>=30)
	{
		cout << "Obeso!" << endl;
	}

	system("pause");
	return 0;
}