#include <stdio.h>

int main() {
  float A, B, M;

  scanf("%f", &A);
  scanf("%f", &B);

  M = ((A * 3.5) + (B * 7.5))/11;

  printf("MEDIA = %.5f\n", M);

  return 0;
}