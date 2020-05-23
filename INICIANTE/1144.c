#include <stdio.h>
#include <math.h>

int main() {
  int n, i;
  scanf("%d", &n);

  for(i = 1; i <= n; i++) {
    printf("%d %.0f %.0f\n", i, pow(i, 2), pow(i, 3));
    printf("%d %.0f %.0f\n", i, pow(i, 2) + 1, pow(i, 3) + 1);
  }
  return 0;
}