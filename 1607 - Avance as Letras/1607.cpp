#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	int aa, bb;
	int t;
	long soma;
	cin >> t;
	for (int i=0; i<t; i++)
	{
		cin>>a>>b;
		soma = 0;
		for (int j=0; j<a.size(); j++)
		{
			aa = a[j];
			bb = b[j];
			if (aa < bb)
				soma += (bb-aa);
			else if (aa > bb)
				soma += (bb - aa) + 26;
			
			//cout << aa << " "<< bb << " " << soma<< endl;
		}
		cout << soma << endl;
	}
	return 0;
}