#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int proximo(int atual, int tamanho){
	return (atual + 1) % (tamanho);
}

int daCerto(int n, int k){
	vector <int> circulo;
	circulo.clear();
	
	//alimenta circulo
	for (int j=0; j<n;j++)
		circulo.push_back(j+1);
	
	//começa
	int lastPos = 0;
		circulo.erase(circulo.begin());
	while(circulo.size() > 1){
		for(int j=0; j<k-1;j++){
			lastPos = proximo(lastPos, circulo.size());
		}
		if (circulo[lastPos] == 13) return 0;
		circulo.erase(circulo.begin() + lastPos);
	}
	
	return 1;
}

int main(){
	int n, k;
	int lastTry;
	
	while (cin >> n && n!= 0){
	    lastTry = 1;
		while(!daCerto(n, lastTry))
			lastTry ++;
			
		cout << lastTry << endl;
	}
}
