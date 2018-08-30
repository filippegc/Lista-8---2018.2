#include<iostream>
using namespace std;

int main()
{
	int idade;

	cout << "Digita tua idade: ";
	cin >> idade;

	if (idade < 5)
	{
		cout << "Não pode participar! " << endl;
	}

	else if (idade <= 7)
	{
		cout << "Infantil A! " << endl;
	}
	else if (idade <= 10)
	{
		cout << "Infantil B! " << endl;
	}

	/*else if (idade >= 11)
	{
		cout << "Juvenil A! " << endl;
	}*/
	else if (idade <= 13)
	{
		cout << "Juvenil A! " << endl;
	}
	/*else if (idade >= 14)
	{
		cout << "Juvenil B! " << endl;
	}*/
	else if (idade <= 17)
	{
		cout << "Juvenil B! " << endl;
	}

	else if (idade >= 18)
	{
		cout << "Senior! " << endl;
	}
	else
	{
		cout << "Senior! " << endl;
	}



	system("pause");
	return 0;
}