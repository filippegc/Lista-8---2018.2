#include <iostream>

using namespace std;

int main()

{
	int numInt;

	cout << "Digite um num inteiro: ";
	cin >> numInt;

	if (numInt % 2) // (numInt%2==0) outro metodo de fazer, porem o resultado eh par
	{
		cout << "Numero impar!" << endl;
	}
	else 
	cout << "Numero par!" << endl;


	system("pause");
	return 0;
}