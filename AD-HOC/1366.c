#include <stdio.h>

int main() {
  int n, c, v, retangulos, i;

  while(scanf("%d", &n) != EOF && n!=0) {
    retangulos = 0;
    for(i = 0; i < n; i++) {
        scanf("%d %d", &c, &v);
        retangulos += v / 2;
    }
    printf("%d\n", retangulos/2);
  }

  return 0;
}