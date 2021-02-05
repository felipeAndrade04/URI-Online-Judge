#include <iostream>

#include <stdlib.h>

using namespace std;

int main () {
  int n, p, cabine = 0;
  bool saida = true;

  cin >> n;

  while (n--) {
    cin >> p;

    if (abs(p - cabine) > 8) {
      saida = false;
    }
    cabine = p;
  }

  if (saida) cout << "S\n";
  else cout << "N\n";
}