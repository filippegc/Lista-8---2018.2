#include <iostream>

using namespace std;

int main()
{

	int num;
	cout << "Digite um numero de 1 a 12: ";
	cin >> num;

	if (num == 1)
	{
		cout << "Janeiro" << endl;
	}
	else if (num == 2)
	{
		cout << "Fevereiro" << endl;
	}
	else if (num == 3)
	{
		cout << "Marco" << endl;
	}
	else if (num == 4)
	{
		cout << "Abril" << endl;
	}
	else if (num == 5)
	{
		cout << "Maio" << endl;
	}
	else if (num == 6)
	{
		cout << "Junho" << endl;
	}
	else if (num == 7)
	{
		cout << "Julho" << endl;
	}
	else if (num == 8)
	{
		cout << "Agosto" << endl;
	}
	else if (num == 9)
	{
		cout << "Setembro" << endl;
	}
	else if (num == 10)
	{
		cout << "Outubro" << endl;
	}
	else if (num == 11)
	{
		cout << "Novembro" << endl;
	}
	else
	{
		cout << "Dezembro " << endl;
	}
	system("pause");
	return 0;
}