/*
Implementação da Busca em Profundidade (DFS) com Listas de Adjacência.
Autor: Talles Brito Viana
Implementação de acordo com o algoritmo descrito em:
CORMEN, T. H. et.al. Algoritmos: Teoria e Prática, 3º edição. Ed. Elsevier, 2012.
A variável 'N' define a quantidade de vértices do grafo.
O vetor 'l' é um vetor de listas.
Caso você deseje utilizar um grafo ponderado, é necessário alterar o tipo do vetor de listas 'l' para vector<pair<int,int> >. Neste caso, cada elemento da lista tem um par, o primeiro valor de um par (o identificador do vértice adjacente) é acessado através de .first, já o segundo (o peso da aresta que permite chegar no adjacente) através de .second. Para criar um novo par utilize a função make_pair(int,int). Não esqueça de adicionar #include <utility> no cabeçalho do programa. Além disso, você deve alterar a função DFS-VISIT para que a mesma trate os pares ao percorrer as listas.
Supondo que M é a quantidade de arestas do grafo então a complexidade da busca é dada por O(N + M).
*/


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
int cor[MAXV+1]; //cor
// int descoberta[MAXV+1]; //tempo de descoberta
// int termino[MAXV+1]; //tempo de término
int antecessor[MAXV+1]; //antecessor na árvore de busca
// int tempo; //tempo corrente durante execução do algoritmo

void DFS_VISIT(int u){
	cor[u] = CINZA;
	// tempo++;
	// antecessor[u] = tempo;

	int i,v;
	for(int v: grafo[u]){ //percorre cada elemento da lista grafo[u]
		if(cor[v]==BRANCO){
			antecessor[v] = u;
			DFS_VISIT(v);
		}	
	}

	cor[u] = PRETO;
	// tempo++;
	// termino[u] = tempo;
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
  int n, m;
  int v, w, p;
  int i, j;
  bool saida;

  while (cin >> n >> m && (n != 0 && m != 0)) {
    N = n;
    saida = true;

	  inicializar();
    while(m--) {
      cin >> v >> w >> p;

      if (p == 1) grafo[v].push_back(w);
      else {
        grafo[v].push_back(w);
        grafo[w].push_back(v);
      }
    }


    for (i = 1; i <= n; i++) {
      DFS(i);

      // imprimir(cor);
      for (j = 1; j <= n; j++) {
        if (cor[j] != PRETO) saida = false;
      }

    }
      if (saida) cout << "1\n";
      else cout << "0\n";

  }
  
	return 0;
}