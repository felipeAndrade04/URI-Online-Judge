#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool maiuscula (char c) {
  return c >= 'A' && c <= 'Z';
}
bool minuscula (char c) {
  return c >= 'a' && c <= 'z';
}

int main() {
  int n, i, tam;
  string palavra;

  cin >> n;

  getchar();
  while(n--) {
    getline(cin, palavra);

    tam = palavra.length();

    for(i = 0; i < tam; i++) {
      if(maiuscula(palavra[i]) || minuscula(palavra[i])) {
        palavra[i] = palavra[i] + 3;
      }
    }

    reverse(palavra.begin(), palavra.end());
  
    for(i = tam/2; i < tam; i++) {
      palavra[i]--;
    }

    cout << palavra << endl;
  }
}