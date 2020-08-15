#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  int n, tamanho, i;
  string frase;

  cin >> n;

  getchar();

  while(n--) {
    getline(cin, frase);

    frase = ' ' + frase;

    tamanho = frase.length();

    for (i = 0; i < tamanho; i++) {
      if(frase[i] == ' ' && isalpha(frase[i + 1])) cout << frase[i+1];
    }

    cout << endl;
  }
}
