#include <stdio.h>

int main() {
  int c, x, participantes = 0;

  scanf("%d", &c);

  while(c--) {
    scanf("%d", &x);

    if(x == 1) participantes++;
  }

  printf("%d\n", participantes);

  return 0;
}