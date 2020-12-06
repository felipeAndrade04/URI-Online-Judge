#include <iostream>
#include <string>

using namespace std;

int main () {
  string DNA, codigoGenetico;
  int tamanho, i, contador;
  bool resistente;

  while (cin >> DNA >> codigoGenetico) {
    tamanho = DNA.length();
    contador = 0;
    resistente = false;

    if (DNA.find(codigoGenetico) < DNA.length())
      cout << "Resistente\n";
    else cout << "Nao resistente\n";
  }
}