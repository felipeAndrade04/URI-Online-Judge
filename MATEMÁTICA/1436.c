#include <stdio.h>

int main() {
  int t, n, v, posicaoMediana, valorMediana, i, j;

  scanf("%d", &t);
  for(j = 1; j <= t; j++) {
    scanf("%d", &n);
    posicaoMediana = n/2 + 1;
    for(i = 1; i <= n; i++) {
      scanf("%d", &v);
      if(i == posicaoMediana) valorMediana = v;
    }
    printf("Case %d: %d\n", j, valorMediana);
  }
  return 0;
}