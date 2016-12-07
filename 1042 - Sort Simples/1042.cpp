#include <iostream>

using namespace std;

int main()
{
	int a,b,c,maior,menor,meio;
	
	cin >> a >> b >> c;
	maior = a; meio = a; menor = a;
	if (b > maior)
		maior = b;
	else
		meio = b;
	
	if (c > maior)
	{
		menor = meio;
		meio = maior;
		maior = c;
	}
	else if (c > meio)
	{
		menor = meio;
		meio = c;
	}
	else
		menor = c;
	
	cout << menor<<endl;
	cout << meio << endl;
	cout << maior << endl << endl;
	cout << a<<endl;
	cout << b << endl;
	cout << c<< endl;
	
	return 0;
}