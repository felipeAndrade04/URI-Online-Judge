#include <iostream>
#include <set>

using namespace std;

int main() {
  int n, total;
  string pokemon;
  set <string> mochila;

  cin >> n;

  while(n--) {
    cin >> pokemon;
    mochila.insert(pokemon);
  }

  total = 151 - mochila.size();

  printf("Falta(m) %d pomekon(s).\n", total);
}