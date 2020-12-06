#include <iostream>
#include <map>
#include <string>

using namespace std;

int main () { 
  int n, m;
  int tamanho, i, contador, errado;
  string nome, assinatura;
  map <string, string> diario;

  while (cin >> n && n != 0) {
    
    diario.clear();
    errado = 0;

    while (n--) {
      cin >> nome >> assinatura;

      diario[nome] = assinatura;
    }

    cin >> m;

    while (m--) {
      cin >> nome >> assinatura;
      contador = 0;
      
      tamanho = diario[nome].length();
      for (i = 0; i < tamanho; i++) {
        if (diario[nome][i] != assinatura[i]) contador++;
      }

      if (contador > 1) errado++;
    }

    cout << errado << endl;
  }

  return 0;
}