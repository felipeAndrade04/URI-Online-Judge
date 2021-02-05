#include <iostream>
#include <math.h>
#include <vector>

#define Y '1'
#define N '0'
#define NULO '*'

using namespace std;

vector <char> primos(100001, NULO);

char primo(int x) {    
  int i, root;
  
  if(x < 2) return N;

  if(x == 2) return Y;
  
  if(x%2 == 0) return N;
  
  root = sqrt(x);

  for(i = 3; i <= root; i = i + 2)
  {
      if(x%i == 0) return N;
  }
  return Y;
}

bool super(int n) {
  while (n != 0) {
    if (primos[n % 10] == N) {
      return false;
    }

    n = n/10;
  }
  return true;
}

int main () {
  int n, i;

  for (i = 0; i < 10; i++) {
    primos[i] = primo(i);
  }

  while (cin >> n) {
    if (primos[n] == NULO) {
      primos[n] = primo(n);
    }
    if (primos[n] == Y) {
      if (super(n)) {
        cout << "Super\n";
      }
      else {
        cout << "Primo\n";
      }
    }
    else {
      cout << "Nada\n";
    }
  }
}