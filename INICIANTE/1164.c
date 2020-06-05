#include <stdio.h>

int main() {
  long long int n, x, i, soma;
  scanf("%lld", &n);

  while(n--) {
    soma = 0;
    scanf("%lld", &x);
    for(i = 1; i < x; i++) {
      if(x % i == 0) soma += i;
    }
    if(soma==x) printf("%lld eh perfeito\n", x);
    else printf("%lld nao eh perfeito\n", x);
  }
  return 0;
}