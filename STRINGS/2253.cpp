#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  bool invalida, maiusculo, minusculo, numero, tamanho;
  int i, tam;
  string senha;

  while(getline(cin, senha)) {
    invalida = minusculo = maiusculo = numero = tamanho = false;
    
    tam = senha.length();

    if(tam >= 6 && tam <= 32) {
      tamanho = true;
      for(i = 0; i < tam; i++) {
        if(isupper(senha[i])) maiusculo = true;
        else if(islower(senha[i])) minusculo = true;
        else if(isdigit(senha[i])) numero = true;
        else invalida = true;
      }
    } else tamanho = false;

    if(!invalida && tamanho && maiusculo && minusculo && numero) {
      cout << "Senha valida.\n";
    } else {
      cout << "Senha invalida.\n";
    }
  }
}