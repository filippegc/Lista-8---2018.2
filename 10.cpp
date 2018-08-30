#include <iostream>
using namespace std;

int main()
{
	float	precoEt, x;
	char opc;


	cout << "Digite o preco da etiqueta: ";
	cin >> precoEt;

	cout << "Digite a forma de pagamento: ";
	cin >> opc;

	if (opc == '1')
	{
		
		cout << "Ganhaste 15% off!" << endl;
		x = precoEt * 0.85;
		cout << "Preco final eh: " << x << endl;
	}
	else if (opc == '2')
	{		x = precoEt * 0.90;

		cout << "Ganhaste 10% off!" << endl;
		cout << "Preco final eh: " << x << endl;
	}
	else if (opc == '3')
	{
		cout << "Preco sem desconto!" << precoEt << endl;
	}
	else if (opc == '4')
	{		x = precoEt * 1.10;

		cout << "Acrescimeo de 10%! " << endl;
		cout << "Preco final eh: " << x << endl;
	}


	system("pause");
	return 0;
}