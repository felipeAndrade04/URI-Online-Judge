#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct medalhas {
  string pais;
  int ouro;
  int prata;
  int bronze;
} Medalhas;

bool compara (Medalhas a, Medalhas b) {
  if (a.ouro != b.ouro) return a.ouro > b.ouro; 
  if (a.prata != b.prata) return a.prata > b.prata; 
  if (a.bronze != b.bronze) return a.bronze > b.bronze; 
  return a.pais < b.pais;
}

int main () {
  vector <Medalhas> quadro;

  int n, i;

  cin >> n;

  quadro.resize(n);
  for (i = 0; i < n; i++) {
    cin >> quadro[i].pais >> quadro[i].ouro >> quadro[i].prata >> quadro[i].bronze;
  }

  sort(quadro.begin(), quadro.end(), compara);

  for (i = 0; i < n; i++) {
    cout << quadro[i].pais;
    printf(" %d %d %d\n", quadro[i].ouro, quadro[i].prata, quadro[i].bronze);
  }

  return 0;
}