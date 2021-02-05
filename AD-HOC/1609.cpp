#include <iostream>
#include <set>

using namespace std;

int main () {
  int t, n, c;

  set <int> carneiros;

  cin >> t;

  while (t--) {
    cin >> n;
    carneiros.clear();
    while (n--) {
      cin >> c;
      carneiros.insert(c);      
    }

    cout << carneiros.size() << '\n';
  } 
}