#include <iostream>
using namespace std;

int main()
{
	float alt, pesoIdeal;
	char sex;

	cout << "Digite a altura: ";
	cin >> alt;

	cout << "Digite o sexo: ";
	cin >> sex;

	if (tolower(sex) == 'm')
	{
		pesoIdeal = (62.1*alt) - 44.7;
		cout << "Peso ideal: " << pesoIdeal << endl;
	}
	else if (tolower(sex) == 'h')
		{
			pesoIdeal = (72.7*alt) - 58;
			cout << "Peso ideal: " << pesoIdeal << endl;
		}
	else
	{
		cout << "Invalido! " << endl;
	}


	system("pause");
	return 0;
}