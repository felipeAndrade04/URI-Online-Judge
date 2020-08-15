#include <iostream>
#include <set>
#include <utility>

using namespace std;

int main() {
  int n, i;
  int distancia;
  char regiao;
  string nome;

  set <pair<int, pair<char, string>>> crianca;

  while (cin >> n) {
    crianca.clear();
    while (n--) {
      cin >> nome >> regiao >> distancia;

      crianca.insert(make_pair(distancia, make_pair(regiao, nome)));
    }

    for (auto x: crianca) {
      cout << x.second.second << endl;
    }
    // for(auto it = crianca.begin(); it != crianca.end(); it++) {
    //   cout << it->second.second << endl;
    // }
  }
}