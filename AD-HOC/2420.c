#include <stdio.h>

int main() {
  unsigned long long int n, soma[100100], i, a, meio;

  scanf("%llu", &n);
  scanf("%llu", &soma[1]);

  for(i = 2; i <= n; i++) {
    scanf("%llu", &a);
    soma[i] = soma[i-1] + a;
  }
  meio = soma[n] / 2;
  for(i = 1; i <= n; i++) {
    if(soma[i] == meio) {
      printf("%llu\n", i);
      return 0;
    }
  }
  return 0;
}