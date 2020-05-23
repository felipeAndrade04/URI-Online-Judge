#include <stdio.h>

int main() {
  int vC, eC, gC, vF, eF, gF, pontoC, pontoF;
  char vencedor;

  scanf("%d %d %d %d %d %d", &vC, &eC, &gC, &vF, &eF, &gF);

  pontoC = vC * 3 + eC;
  pontoF = vF * 3 + eF;

  if(pontoC == pontoF) {
    if (gC > gF) vencedor = 'C';
    else if(gC < gF) vencedor = 'F';
    else vencedor = '=';
  }
  else if(pontoC > pontoF) vencedor = 'C';
  else if(pontoC < pontoF) vencedor = 'F';

  printf("%c\n", vencedor);

}