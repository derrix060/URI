#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int proximo(int atual, int tamanho){
	return (atual + 1) % (tamanho);
}

int main(){
	int nc;
	int n, k;
	int lastPos = 0;
	
	cin >> nc;
		
		vector <int> circulo;
		for(int i=0; i<nc;i++){
			cin >> n >> k;
			
			circulo.clear();
			
			//alimenta circulo
			for (int j=0; j<n;j++)
				circulo.push_back(j+1);
			
			//começa
			lastPos = 0;
			while(circulo.size() > 1){
				for(int j=0; j<k-1;j++){
					lastPos = proximo(lastPos, circulo.size());
				}
				circulo.erase(circulo.begin() + lastPos);
			}
			
			printf("Case %d: %d\n", i+1, circulo[0]);
			
		}
}
