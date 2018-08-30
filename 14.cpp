#include <iostream>

using namespace std;

int main()
{
	float prod;
	cout << "Digite o valor do produto: ";
	cin >> prod;

	if (prod < 20.00)
	{
		cout << "O valor do produto acresce: " << prod * 1.45 << endl;
	}
	else if (prod <=50.00)
	{
		cout << "O valor do produto acresce: " << prod * 1.35 << endl;
	}
	else 
	{
		cout << "O valor do produto acresce: " << prod * 1.25 << endl;
	}




	system("pause");
	return 0;
}