#include <stdio.h>

int main() {
  unsigned long long int v[1000010], i, n, valor, cont = 0;
  scanf("%llu", &n);
  for(i = 0; i <= 1000000; i++) v[i] = 0;
  for(i = 0; i < n; i++) {
    scanf("%llu", &valor);
    v[valor] = 1;
  }
  for(i = 0; i <= 1000000; i++) {
    if(v[i] != 0) cont++;
  }
  printf("%llu\n", cont);

  return 0;
}