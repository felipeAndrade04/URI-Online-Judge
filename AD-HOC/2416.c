#include <stdio.h>

int main() {
  int x, y, pontoTermino;

  scanf("%d %d", &x, &y);
  
  pontoTermino = x % y;
  printf("%d\n", pontoTermino);
}