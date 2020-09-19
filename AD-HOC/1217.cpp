#include <iostream>

using namespace std;

int main() {
  int n, contDia, contTotal = 0, i, j;
  double preco, precoTotal = 0;
  string frutas;

  cin >> n;

  for (i = 1; i<= n; i++) {
    contDia = 1;
    cin >> preco;
    getchar();
    getline(cin, frutas);

    for (char c: frutas) {
      if (c == ' ') contDia++;
    }

    printf("day %d: %d kg\n", i, contDia);
    contTotal += contDia;
    precoTotal += preco;
  }

  printf("%.2lf kg by day\n", (contTotal*1.0)/n);
  printf("R$ %.2lf by day\n", precoTotal/n);
}