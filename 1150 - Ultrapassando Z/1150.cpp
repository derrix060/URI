#include <iostream>
using namespace std;

int main() {
	int x, z;
	int resp = 0, temp = 0, fator;
	
	cin >> x >> z;
	
	while (z <= x)
	{
		cin >> z;
	}
	
	fator = x;
	while (temp < z)
	{
		temp += fator;
		fator ++;
		resp ++;
	}
	
	cout << resp << endl;
	
	return 0;
}