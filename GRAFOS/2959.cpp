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

int DESTINO;

void DFS_VISIT(int u){
	cor[u] = CINZA;

	int i,v;
	for(int v: grafo[u]){ //percorre cada elemento da lista grafo[u]
    if (cor[DESTINO] == CINZA) return;
		if(cor[v]==BRANCO){
			antecessor[v] = u;
			DFS_VISIT(v);
		}	
	}

	cor[u] = PRETO;
}

void DFS(int ORIGEM){
	int u;
	for(u = 1; u <= N; u++){
		cor[u] = BRANCO;
		antecessor[u] = NULO;
	}

  DFS_VISIT(ORIGEM);
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
	inicializar();

  int n, m, p;
  int a, b;
  int k, l;

  cin >> n >> m >> p;

  N = n;

  while (m--) {
    cin >> a >> b;
    grafo[a].push_back(b);
    grafo[b].push_back(a);
  }

  while (p--) {
    cin >> k >> l;

    DESTINO = l;

    DFS(k);

    if (cor[l] == CINZA) cout << "Lets que lets" << endl;
    else cout << "Deu ruim" << endl;
  }
	
	return 0;
}