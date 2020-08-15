#include <iostream>
#include <utility>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main() {
  int n, h, nivel, i, j, tamanho;
  string jogador;

  pair<int, string> auxiliar;
  set <pair<int, string>> jogadores_pontos;

  vector <set <string>> times;

  cin >> n >> h;

  times.resize(h);

  while (n--) {
    cin >> jogador >> nivel;

    jogadores_pontos.insert(make_pair(nivel, jogador));
  }

  i = 0;
  for (auto it = jogadores_pontos.rbegin(); it != jogadores_pontos.rend(); it++ ) {
    auxiliar = *it;

    times[i].insert(auxiliar.second);
    i++;
    if(i == h) i = 0;
  }

  tamanho = times.size();

  for (i = 0; i < tamanho; i++) {
    cout << "Time " << i + 1 << endl;
    
    for (string j: times[i]) {
      cout << j << endl;
    }

    cout << endl;
  }
}