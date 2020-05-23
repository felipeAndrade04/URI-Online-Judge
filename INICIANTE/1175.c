#include <stdio.h>

int main() {
  int n[20], i, j, tam;

  tam = sizeof(n)/sizeof(int);  
  for(i=0; i<tam; i++) {
    scanf("%d", &n[i]);
  }
  for(j=tam-1, i = 0; j>=0, i<tam; j--, i++) {
    printf("N[%d] = %d\n", i, n[j]);
  }  
  return 0;
}

