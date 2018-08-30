#include <iostream>

using namespace std;

int main()
{
	float numero, menor, maior;

	cout << "Digite um numero: ";
	cin >> numero;

	menor = numero;
	maior = numero;

	cout << "Digite um numero: ";
	cin >> numero;
	
	if (numero < menor)
	{
		menor = numero;
	}

	if (numero > maior)
	{
		maior = numero;
	}

	cout << "Digite um numero: ";
	cin >> numero;

	if (numero < menor)
	{
		menor = numero;
	}

	if (numero > maior)
	{
		maior = numero;
	}
	cout << "Digite um numero: ";
	cin >> numero;

	if (numero < menor)
	{
		menor = numero;
	}

	if (numero > maior)
	{
		maior = numero;
	}
	cout << "Digite um numero: ";
	cin >> numero;

	if (numero < menor)
	{
		menor = numero;
	}

	if (numero > maior)
	{
		maior = numero;
	}

	cout << menor << " e " << maior << endl;

	system("pause");
	return 0;
}