#include <stdio.h>

int main() {
  unsigned long int a, b, soma;
  while(scanf("%lu %lu", &a, &b) != EOF) {
    soma = a ^ b;
    printf("%ld\n", soma);  
  }
  return 0;
}

