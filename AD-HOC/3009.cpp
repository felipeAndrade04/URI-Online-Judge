#include <iostream>
#include <string.h>

using namespace std;

#define MAXV 2000 //quantidade máxima de vértices
#define ADJACENTE 1
#define NAO_ADJACENTE 0

#define BRANCO 0
#define CINZA 1
#define PRETO 2
#define NULO -1

char grafo[MAXV + 1][MAXV +1]; //matriz de adjacências
int N; //quantidade de vértices
int cor[MAXV+1];
int antecessor[MAXV+1]; //antecessor na árvore de busca

void DFS_VISIT(int u){
	cor[u] = CINZA;

	int v;
	for(v = 1; v <= N; v++){
		if(grafo[u][v] == ADJACENTE){ //se v é adjacente a u
			if(cor[v]==BRANCO){
				antecessor[v] = u;
				DFS_VISIT(v);
			}
		}
	}

	cor[u] = PRETO;
}

void DFS(int domino){
	int u;
	for(u = 1; u <= N; u++){
		cor[u] = BRANCO;
		antecessor[u] = NULO;
	}
  
  DFS_VISIT(domino);
}

void imprimir(int vet[]){
	int i;
	for(i = 1; i <= N; i++){
		printf("%d, ", vet[i]);
	}
	printf("\n");
}

void inicializar(){
	memset(grafo,NAO_ADJACENTE,sizeof(grafo));
}


int main(){
  int c;
  int n, m;
  int x, y;
  bool teste;

  cin >> c;

  while (c--) {
	  inicializar();

    cin >> n >> m;
    N = n;

    while (m--) {
      cin >> x >> y;

      grafo[x][y] = ADJACENTE;
    }

    for (int i = 1; i <= n; i++) {
      DFS(i);

      teste = true;
      
      for (int j = 1; j <= n; j++) {
        if (cor[j] == BRANCO) {
          j = n + 1;
          teste = false;
        }
      }
      if (teste) i = n + 1;
    }

    if (teste) cout << "S" << endl;
    else cout << "N" << endl;
  }
  
  return 0;
}