#include <stdio.h>

int main() {
  long int h, p;
  double consumo;

  scanf("%ld %ld", &h, &p);
  consumo = h / (p * 1.0);
  printf("%.2lf\n", consumo);
  return 0;
}