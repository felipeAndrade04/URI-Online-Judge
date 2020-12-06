#include <iostream>
#include <algorithm>

using namespace std;

#define MAXN 50500
#define MAXM 200200

// Tipo aresta
struct t_aresta{
    int peso; // Distâcia entre os vértices (u,v)
    int u, v;
};

bool comp_menor(t_aresta u, t_aresta v){ return u.peso < v.peso; } // Ordenação para vetor das arestas
bool comp_maior(t_aresta u, t_aresta v){ return u.peso > v.peso; } // Ordenação para vetor das arestas

int N, M; // número de vértices e arestas
t_aresta aresta[MAXM];

// para o union find
int antecessor[MAXN];
int peso[MAXN];

// a árvore
t_aresta mst[MAXM];
//--------------------

// funções do union find
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


int main(){
    
    // ler a entrada
    cin >> M;
    N = 1000001;

    int cont;
    
    for(int i = 1;i <= M;i++)
        cin >> aresta[i].u >> aresta[i].v >> aresta[i].peso;
    
    for (int j = 1; j <= 2; j++) {
      // inicializar os antecessores para o union-find
      for(int i = 1;i <= N;i++) antecessor[i] = i;

      // ordenar as arestas
      if (j == 1) sort(aresta+1, aresta+M+1, comp_maior);
      else sort(aresta+1, aresta+M+1, comp_menor);

      cont = 0;
      int size = 0;
      for(int i = 1;i <= M;i++){
          
          if( find(aresta[i].u) != find(aresta[i].v) ){ // se estiverem em componentes distantes
              join(aresta[i].u, aresta[i].v);
              
              mst[++size] = aresta[i];
          }
          
      }
      
      // imprimir a MST
      for(int i = 1;i < N;i++) cont += mst[i].peso;
      cout << cont << endl;
    }
    return 0;
}
