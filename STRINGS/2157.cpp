#include <iostream>

using namespace std;

int main() {
  int n, x, y, diferenca, i, aux;

  cin >> n;

  while (n--) {
    cin >> x >> y;

    for (i = x; i <= y; i++) {
      cout << i;
    }

    for (i = y; i >= x; i--) {
      aux = i;
      while (aux != 0) {
        cout << aux % 10;
        aux = aux / 10;
      }
    }

    cout << endl;
  }
}