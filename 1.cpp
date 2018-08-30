#include <iostream>

using namespace std;


int main()
{
	float n1, n2;
	cout << "Digite um numero: ";
	cin >> n1;

	cout << "Digite um numero: ";
	cin >> n2;


	if (n2 != 0)
	{
		cout << "O resultado da divisao eh: " << n1 / n2 << endl;
	}
	else

	{
		cout << "Invalido!" << endl;
	}
	system("pause");
	return 0;
}