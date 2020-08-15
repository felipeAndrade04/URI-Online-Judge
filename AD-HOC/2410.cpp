#include <iostream>
#include <set>

using namespace std;

int main() {
  int n, x;
  set <int> chamada;

  cin >> n;

  while (n--) {
    cin >> x;
    chamada.insert(x);
  }

  cout << chamada.size() << endl;
}