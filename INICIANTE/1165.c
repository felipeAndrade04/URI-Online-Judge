#include <stdio.h>

int main() {
  long long int n, x, i, cont;

  scanf("%lld", &n);

  while(n--) {
    cont = 0;
    scanf("%lld", &x);
    for(i = 1; i <= x; i++) {
      if(cont > 2) i = x;
      if(x % i == 0) cont++;
    }
    if(cont <= 2) printf("%lld eh primo\n", x);
    else printf("%lld nao eh primo\n", x);
  }
  return 0;
}