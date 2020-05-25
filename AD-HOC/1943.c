#include <stdio.h>

int main() {
  int k, posicao;

  scanf("%d", &k);
  if(k == 1) posicao = 1;
  else if(k <= 3) posicao = 3;
  else if(k <= 5) posicao = 5;
  else if(k <= 10) posicao = 10;
  else if(k <= 25) posicao = 25;
  else if(k <= 50) posicao = 50;
  else if(k <= 100) posicao = 100;

  printf("Top %d\n", posicao);
  return 0;
}