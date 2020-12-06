#include <iostream>

using namespace std;

int main () {
  string composicao;
  float contador, tempoCompasso;

  while (cin >> composicao && composicao[0] != '*') {
    contador = 0;
    tempoCompasso = 0.0;
    for (char c: composicao) {
      if (c == '/') {
        if (tempoCompasso == 1) contador++;
        tempoCompasso = 0;
      } 
      else if (c == 'W') tempoCompasso += 1;
      else if (c == 'H') tempoCompasso += 0.5;
      else if (c == 'Q') tempoCompasso += 0.25;
      else if (c == 'E') tempoCompasso += 0.125;
      else if (c == 'S') tempoCompasso += 0.0625;
      else if (c == 'T') tempoCompasso += 0.03125;
      else if (c == 'X') tempoCompasso += 0.015625;
    }

    if (contador) cout << contador << endl;
    else cout << "0\n";
  }

  return 0;
}