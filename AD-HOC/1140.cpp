#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
  string frase;
  bool tautograma;
  char primeiraLetra;
  int i, tam;

  while(getline(cin, frase) && frase != "*") {
    tautograma = true;

    primeiraLetra = tolower(frase[0]);

    tam = frase.length();

    for(i = 1; i < tam && tautograma; i++) {
      if(frase[i] == ' ') {
        if(tolower(frase[i + 1]) != primeiraLetra) tautograma = false;
      }
    }

    if(tautograma) cout << "Y" << endl;
    else cout << "N" << endl;
  }
}