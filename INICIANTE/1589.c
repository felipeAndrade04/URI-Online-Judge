#include <stdio.h>

int main() {
  int n;
  unsigned long long int r1, r2;

  scanf("%d", &n);

  while(n--) {
    scanf("%llu %llu", &r1, &r2);

    printf("%llu\n", r1+r2);
  } 
  return 0;
}