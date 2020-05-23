#include <stdio.h>
#include <string.h>

#define MAXV 2000
#define ADJACENTE 1
#define NAO_ADJACENTE 0

#define BRANCO 0
#define CINZA 1
#define PRETO 2
#define NULO -1

int m[MAXV + 1][MAXV +1]; //matriz de adjacências
int N; //quantidade de vértices
int c[MAXV+1]; //cor
int d[MAXV+1]; //tempo de descoberta
int t[MAXV+1]; //tempo de término
int a[MAXV+1]; //antecessor na árvore de busca
int tempo; //tempo corrente durante execução do algoritmo

void DFS_VISIT(int u){
	c[u] = CINZA;
	tempo++;
	d[u] = tempo;

	int v;
	for(v = 1; v <= N; v++){
		if(m[u][v] == ADJACENTE){ //se v é adjacente a u
			if(c[v]==BRANCO){
				a[v] = u;
				DFS_VISIT(v);
			}
		}
	}

	c[u] = PRETO;
	tempo++;
	t[u] = tempo;
}

void DFS(int origem){
	int u;
	for(u = 1; u <= N; u++){
		c[u] = BRANCO;
		d[u] = NULO;
		t[u] = NULO;
		a[u] = NULO;
	}

	tempo=0;

	
		DFS_VISIT(origem);
	
}

void imprimir(int vet[]){
	int i;
	for(i = 1; i <= N; i++){
		printf("%d, ", vet[i]);
	}
	printf("\n");
}

void inicializar(){
	memset(m,NAO_ADJACENTE,sizeof(m));
}


int main(){

  int e, l, x, y, cont = 1;

  
  while(scanf("%d %d", &e, &l) != EOF && e != 0 && l != 0){
    inicializar();
    int i;
    for(i = 1; i <= l; i++) {
      
      scanf("%d %d",&x,&y);
      
      m[x][y] = ADJACENTE;
      m[y][x] = ADJACENTE;
    }

    N=e;
    

    DFS(1);
    int falha = 0;
    int j;
    for(j = 1; j <= e; j++){
      if(c[j] != PRETO){
        falha = 1;
      }

    }
    if(falha != 1){
        printf("Teste %d\n", cont);
        printf("normal\n\n");
    }else{
        printf("Teste %d\n", cont);
        printf("falha\n\n");
    }
    cont++;
    
  
  }
	return 0;
}