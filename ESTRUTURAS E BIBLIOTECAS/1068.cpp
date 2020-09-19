#include <iostream>

using namespace std;

int main() {
  string expressao;
  int cont, i, tamanho;

  while(cin >> expressao) {
    cont = 0;

    tamanho = expressao.length();
    for(i = 0; i < tamanho && cont >= 0; i++) {
      if (expressao[i] == '(') cont++;
      else if (expressao[i] == ')') cont--;
    }

    if (cont == 0) cout << "correct\n";
    else cout << "incorrect\n";
  }
}