#include <stdio.h>

int main() {
  int m, n, p, q, i, lampadas;
  while(scanf("%d %d %d", &m, &n, &p) != EOF &&  m != 0 && n!=0 && p!=0) {
    lampadas = 0;
    for(i = 0; i < p; i++) {
      scanf("%d", &q);
      while(q>n) q = q - n;
      lampadas += n - q + 1;      
    }
    printf("Lights: %d\n", lampadas);
  }
}