#include <stdio.h>

int main() {
  int t, pA, pB, nP, i = 0, anos;
  float g1, g2;
  scanf("%d", &t);

  while(t) {
    anos = 0;
    scanf("%d %d %f %f", &pA, &pB, &g1, &g2);
    
    while(pA <= pB && anos <= 100) {
      anos++;
      pA += (int)(pA * (g1/100));
      pB += (int)(pB * (g2/100));
    }
    t--;
    if(anos>100) printf("Mais de 1 seculo.\n");
    else printf("%d anos.\n", anos);
  }


  return 0;
}