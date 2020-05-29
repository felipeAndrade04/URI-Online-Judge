#include <stdio.h>

int main() {
  unsigned long long int n, totalDiagonais;
  
  scanf("%llu", &n);

  totalDiagonais = (n * (n-3))/2;
  printf("%llu\n", totalDiagonais);
  return 0;
}