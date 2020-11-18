#include <iostream>
#include <vector>
using namespace std;

#define MAXV 2000 //quantidade máxima de vértices

#define BRANCO 0
#define CINZA 1
#define PRETO 2
#define NULO -1

vector<int> grafo[MAXV + 1]; //lista de adjacências
int N; //quantidade de vértices
int cor[MAXV+1]; 
int antecessor[MAXV+1]; //antecessor na árvore de busca

int CONT;

void DFS_VISIT(int u){
	cor[u] = CINZA;

	int i,v;
	for(int v: grafo[u]){ //percorre cada elemento da lista grafo[u]
		if(cor[v]==BRANCO){
			antecessor[v] = u;
			DFS_VISIT(v);
		}	
	}

	cor[u] = PRETO;
}

void DFS(){
	int u;
	for(u = 1; u <= N; u++){
		cor[u] = BRANCO;
		antecessor[u] = NULO;
	}

  CONT = 0;

	DFS_VISIT(1);
	for(u = 1; u <= N; u++){
		if(cor[u] == BRANCO) {
      CONT++;
			DFS_VISIT(u);
    }
	}
}

void imprimir(int vet[]){
	int i;
	for(i = 1; i <= N; i++){
		printf("%d, ", vet[i]);
	}
	printf("\n");
}

void inicializar(){
	int u;
	for(u = 0; u <= N; u++){
		grafo[u] = vector<int>(); //cria uma lista vazia para cada vértice u
	}
}

int main(){
  int t;
  int n, m;
  int x, y;
  int teste = 0;
  cin >> t;

  while (t--) {
    inicializar();
    teste++;

    cin >> n >> m;
    N = n;

    while (m--) {
      cin >> x >> y;

      grafo[x].push_back(y);
      grafo[y].push_back(x);
    }
    DFS();

    if (CONT == 0) printf("Caso #%d: a promessa foi cumprida\n", teste);
    else printf("Caso #%d: ainda falta(m) %d estrada(s)\n", teste, CONT);
  }
	
	return 0;
}