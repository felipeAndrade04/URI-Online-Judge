#include <stdio.h>

int main() {
  int i;
  double v;
  scanf("%lf", &v);
  for(i = 0; i < 100; i++) {
    printf("N[%d] = %.4lf\n", i, v);
    v = v/2.0;
  }
}