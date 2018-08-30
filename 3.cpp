#include <iostream>

using namespace std;

int main()
{
	float  notaGa, notaGb, notaGc, media;
	char rec;

	cout << "Informe a nota de GA: ";
	cin >> notaGa;
	cout << "Informe a nota de GB: ";
	cin >> notaGb;


	media = (notaGa + 2 * notaGb) / 3;

	if (media >= 6)
	{
		cout << "Aprovado! " << media << endl;
	}
	else
	{
		cout << "Reprovado! " << media << endl;
		cout << "Deseja recurperar GA ou GB? ";
		cin >> rec;

		if (tolower(rec) == 'a')
		{
			cout << "Informe a nota do GC: ";
			cin >> notaGc;

			media = (notaGc + 2 * notaGb) / 3;

			if (media >= 6)
			{
				cout << "Aprovado! " << media << endl;
			}
			else 
			{
				cout << "Reprovado! " << media << endl;
			}
		}
		else if (tolower(rec) == 'b')
		{
			cout << "Informe a nota do GC: ";
			cin >> notaGc;

			media = (notaGa + 2 * notaGc) / 3;

			if (media >= 6)
			{
				cout << "Aprovado! " << media << endl;
			}
			else
			{
				cout << "Reprovado! " << media << endl;
			}
		}

	}

	system("pause");
	return  0;
}