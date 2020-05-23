#include <stdio.h>

int main() {
  int x, y, tempo = 0;

  scanf("%d %d", &x, &y);
  if(x == y){
    tempo = 24;
  }
  else if(x > y) {
    tempo = (24 - x) + y;
  } else {
    tempo = y - x;
  }
  
  printf("O JOGO DUROU %d HORA(S)\n", tempo);

  return 0;
}