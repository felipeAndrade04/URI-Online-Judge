#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  string frase, vogais, vogaisInvertidas;
  int tamanho, i;

  cin >> frase;

  tamanho = frase.length();

  for (i = 0; i < tamanho; i++) {
    if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') vogais += frase[i];
  }

  vogaisInvertidas = vogais;
  reverse(vogaisInvertidas.begin(), vogaisInvertidas.end());

  if(vogaisInvertidas == vogais) cout << 'S' << endl;
  else cout << 'N' << endl;
}