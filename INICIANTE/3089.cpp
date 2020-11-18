#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
  long long int n, tamanho, i;

  while (cin >> n && n !=0) {

  vector <int> v, soma;
  v.resize(2*n);
  soma.resize(n);

  tamanho = n * 2;
  for (i = 0; i < tamanho; i++) {
    cin >> v[i];
  }

  tamanho -= 1;
  for (i = 0; i < n; i++) {
    soma[i] = v[i] + v[tamanho - i];
  }

  sort(soma.begin(), soma.end());

  cout << soma[n - 1] << " " << soma[0] << endl;
  }
}