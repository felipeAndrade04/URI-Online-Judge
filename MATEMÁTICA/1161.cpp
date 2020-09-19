#include <iostream>

using namespace std;

unsigned long long int fatorial(unsigned long long int n) {
  if ((n == 1) || (n == 0)) return 1;
  else {
    return fatorial(n-1) * n;
  }
}

int main() {
  unsigned long long int m, n, soma;

  while (cin >> m >> n) {
    soma = fatorial(m) + fatorial(n);

    cout << soma << '\n';
  }
  
}