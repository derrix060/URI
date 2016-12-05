#include <stdio.h>
#include <string.h>

#define TamanhoEntradaMaximo 1000

typedef struct pilha{
	char v[TamanhoEntradaMaximo];
	int topo;
} t_pilha;

//prototipos funcoes pilha
void inicia_pilha (t_pilha *p);
void empilha (t_pilha *p, char i);
void desempilha (t_pilha *p);
int tamanho_pilha (t_pilha p);
int pilha_vazia (t_pilha p);

int main() {
	int qtdeEntrada = 0;
	int passo;
	int tamanho;
	int i;
	int resultado;
	char entrada[TamanhoEntradaMaximo];
	t_pilha pilha;
	scanf("%d",&qtdeEntrada);
	
	while (scanf("%s",entrada) != EOF){
		
		tamanho = strlen(entrada);
		
		inicia_pilha(&pilha);
		resultado = 1;
		
		for (i = 0; i < tamanho; i++){
			
			if(entrada[i] == '('){
				empilha(&pilha, '(');
			}
			else if(entrada[i] == ')'){
				if (!pilha_vazia(pilha)){
					desempilha(&pilha);
				}
				else{
					resultado = 0;
				}
				
			}
		}
		
		if (!pilha_vazia(pilha)){
			resultado = 0;
		}
		
		if (resultado == 0) {
			printf("in");
		}
		printf("correct\n");
		
	}
	
	return 0;
}


//funcoes pilha
void inicia_pilha (t_pilha *p){
	p->topo = -1;
}

void empilha (t_pilha *p, char i){
	p->topo ++;
	p->v[p->topo] = i;
}

void desempilha (t_pilha *p){
	p->topo --;
}

int tamanho_pilha (t_pilha p){
	return p.topo ++;
}

int pilha_vazia (t_pilha p){
	return (p.topo == -1);
}
