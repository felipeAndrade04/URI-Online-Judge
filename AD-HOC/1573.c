#include <stdio.h>
#include <math.h>

int main() {
  unsigned long long int a, b, c, arestaCubo, x;
  while (scanf("%llu %llu %llu", &a, &b, &c) != EOF && (a != 0 && b != 0 && c != 0)) {
    arestaCubo = a * b * c;
    arestaCubo = cbrt(arestaCubo);
    printf("%llu\n", arestaCubo);
  }
  
  return 0;
}
