#include <stdio.h>
#include <math.h>

int main() {
  long long int a, b, soma;

  scanf("%lld %lld", &a, &b);

  soma = (fabs(a - b) + 1);
  soma *= (a + b);
  soma /= 2;

  printf("%lld\n", soma);
  return 0;
}