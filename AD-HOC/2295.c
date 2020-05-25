#include <stdio.h>

int main() {
  double a, g, rA, rG, tA, tG;

  scanf("%lf %lf %lf %lf", &a, &g, & rA, &rG);

  tA = a / rA;
  tG = g / rG;
  
  if(tG > tA) printf("A\n");
  else printf("G\n");
  return 0;
}