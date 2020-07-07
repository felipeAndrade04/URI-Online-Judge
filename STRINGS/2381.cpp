#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector <string> nomes;
  int n, k;
  string nome;

  cin >> n >> k;

  while(n--) {
    cin >> nome;

    nomes.push_back(nome);
  }

  sort(nomes.begin(), nomes.end());

  cout << nomes[k - 1] << endl;
}