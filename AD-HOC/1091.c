#include <stdio.h>
#include <math.h>

int main() {
  int k, n, m, x, y, i;
  while (scanf("%d", &k) != EOF && k!=0) {
    scanf("%d %d", &x, &y);
    for(i = 0; i < k; i++) {
      scanf("%d %d", &n, &m);
      if(fabs(n) == fabs(x) || fabs(m) == fabs(y)) printf("divisa\n");
      else if(n < x && m > y) printf("NO\n");
      else if(n > x && m > y) printf("NE\n");
      else if(n > x && m < y) printf("SE\n");
      else if(n < x && m < y) printf("SO\n");
    }
  }
  
  return 0;
}