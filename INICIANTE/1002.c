#include <stdio.h>

int main() {

  double A;
  double r;
  const double  pi = 3.14159;

  scanf("%lf", &r);

  A = r*r*pi;

  printf("A=%.4lf\n", A );

  return 0;  
}
