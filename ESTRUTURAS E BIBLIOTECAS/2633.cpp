#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
  vector <pair<int, string>> vec;
  int n, d, tam, i;
  string carne;

  while (cin >> n) {
    vec.clear();

    while (n--) {
        cin >> carne >> d;

        vec.push_back(make_pair(d, carne));
    }

    sort(vec.begin(), vec.end());

    tam = vec.size();

    for(i = 0; i < tam; i++) {
      cout << vec[i].second;
      if(i == tam - 1) cout << endl;
      else cout << " ";
    }
  }

  return 0;
}