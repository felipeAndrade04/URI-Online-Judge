#include <stdio.h>

int main() {
  int n, lA, lB, sA, sB;

  scanf("%d %d %d %d %d", &n, &lA, &lB, &sA, &sB);

  if(n >= lA && n <= lB && n >= sA && n <= sB) printf("possivel\n");
  else printf("impossivel\n");

  return 0;
}