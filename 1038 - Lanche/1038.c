#include <stdio.h>

int main() {
	float tabela[5];
	int qtde;
	int i;
	float vlr;
	
	tabela[0] = 4;
	tabela[1] = 4.5;
	tabela[2] = 5;
	tabela[3] = 2;
	tabela[4] = 1.5;
	
	scanf("%d %d", &i, &qtde);
	vlr = tabela[i-1] * qtde;
	
	printf("Total: R$ %.2f\n",vlr);
	
	return 0;
}
