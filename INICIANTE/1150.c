#include <stdio.h> 

int main() {
  int x, z, i, cont=0, soma=0;

  scanf("%d %d", &x, &z);

  while(x >= z) scanf("%d", &z);

  for(i = 0; i <= z; i++) {
    soma += x+i;
    cont++;
    if(soma > z) {
      printf("%d\n", cont);
      return 0;
    }
  }
}