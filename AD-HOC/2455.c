#include <stdio.h>

int main() {
  int p1, p2, c1, c2, esquerda, direita; 

  scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
  
  esquerda = p1 * c1;
  direita = p2 * c2;

  if(esquerda == direita) printf("%d\n",0);
  else if(esquerda > direita) printf("%d\n",-1);
  else if(esquerda < direita) printf("%d\n",1);  

  return 0;
}