#include <stdio.h>
#include <math.h>

int main() {
  double d, vF, vG, tF, tG, dF;

  while(scanf("%lf %lf %lf", &d, &vF, &vG) != EOF) {
    dF = sqrt(12*12+d*d);

    tF = 12/vF;
    tG = dF/vG;

    if(tG <= tF) printf("S\n");
    else printf("N\n");
  }
  return 0;
}