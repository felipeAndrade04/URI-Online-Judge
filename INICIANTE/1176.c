#include <stdio.h>

int main() {
  unsigned long long int t, n, soma, i, v[100000];

  scanf("%llu", &t);

  while(t--) {
    soma = 0;
    v[0] = 0;
    v[1] = 1;
    scanf("%llu", &n);
    for(i = 2; i <= n; i++) {
      v[i] = v[i-1] + v[i-2];
    }
    printf("Fib(%llu) = %llu\n", n, v[n]);
  }
  return 0;
}