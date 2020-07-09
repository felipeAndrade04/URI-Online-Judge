#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, x;
  vector <int> par;
  vector <int> impar;

  cin >> n;

  while(n--) {
    cin >> x;

    if(x % 2 == 0) par.push_back(x);
    else impar.push_back(x);
  }

  sort(par.begin(), par.end());
  sort(impar.begin(), impar.end(), greater<int>());

  for(int p: par) cout << p << endl;
  for(int i: impar) cout << i << endl;
}