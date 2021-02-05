#include <iostream>
#include <algorithm>

using namespace std;

#define MAXN 500
#define MAXM 124750

// Tipo aresta
struct t_aresta{
    int peso; // Distâcia entre os vértices (u,v)
    int u, v;
};

// Número de vértices e arestas
int N, M; 

// Para o union find
int antecessor[MAXN+1];
int peso[MAXN+1];

// Para o MST/Kruskal
int tamanho_arvore;

// Ordenação para vetor das arestas
bool comp(t_aresta a, t_aresta b){ return a.peso < b.peso; } 

// Para armazenar as arestas
t_aresta aresta[MAXM];

// A árvore
t_aresta arvore_mst[MAXM];

// Funções do union find
int find(int u){
    if(antecessor[u] == u) return u;
    return antecessor[u] = find(antecessor[u]);
}

void join(int u, int v){
    
    u = find(u);
    v = find(v);
    
    if(peso[u] < peso[v]) antecessor[u] = v;
    else if(peso[v] < peso[u]) antecessor[v] = u;
    else{
        antecessor[u] = v;
        peso[v]++;
    }
    
}

void KRUSKAL ()
{
    // Inicializar os antecessores para o union-find
    for(int i = 1; i <= N; i++) antecessor[i] = i;
    
    // Ordenar as arestas
    sort(aresta, aresta+M, comp);
    
    tamanho_arvore = 0;
    for(int i = 0; i < M; i++){
        
        if(find(aresta[i].u) != find(aresta[i].v)){ // Se estiverem em componentes distantes
            join(aresta[i].u, aresta[i].v);
            
            arvore_mst[tamanho_arvore++] = aresta[i];
        }
        
    }
}

int main(){
  int n, m, u, v, c;
  int i;
  cin >> n >> m;

  N = n;
  M = m;

  for (i = 0; i < m; i++) {
    cin >> u >> v >> c;

    aresta[i].u = u;
    aresta[i].v = v;
    aresta[i].peso = c;
  }

  KRUSKAL();
  
  // Uma árvore tem N-1 arestas
  int cont = 0;
  for(int i = 0; i < tamanho_arvore; i++) cont += arvore_mst[i].peso; 
  
  cout << cont << endl;
  
  /* Imprimir a MST
  cout << "[V ----> U] Peso\n";
  for(int i = 0; i < tamanho_arvore; i++)
  {
      printf ("[%d para %d] -> %d\n", arvore_mst[i].u, arvore_mst[i].v, arvore_mst[i].peso);
      
  }
  */
  
  return 0;
}
