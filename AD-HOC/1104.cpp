#include <iostream>
#include <set>

using namespace std;

int main() {
  int a, b, x, y, i, cont;

  set <int> alice;
  set <int> beatriz;

  while (cin >> a >> b && (a != 0 && b != 0)) {
    alice.clear();
    beatriz.clear();
    cont = 0;
    for (i = 0; i < a; i++) {
      cin >> x;
      alice.insert(x);
    }
    for (i = 0; i < b; i++) {
      cin >> y;
      beatriz.insert(y);
    }

    if (alice.size() <= beatriz.size()) {
      for (int carta: alice) {
        cont += !beatriz.count(carta);
      }
    }
    else {
      for (int carta: beatriz) {
        cont += !alice.count(carta);
      }
    }

    cout << cont << "\n";
  } 
}