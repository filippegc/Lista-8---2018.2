#include <iostream>

using namespace std;

int main()
{
	string nome;
	float nota_A, nota_B, nota_C, nota_Final;


	cout << "Digite a nota de A: ";
	cin >> nota_A;
	cout << "Digite a nota de B: ";
	cin >> nota_B;
	cout << "Digite a nota de C: ";
	cin >> nota_C;

	nota_Final = (nota_A*0.15) + (nota_B*0.35) + (nota_C*0.5);

	cout << "Nota final: " << nota_Final << endl;

	system("pause");
	return 0;
}