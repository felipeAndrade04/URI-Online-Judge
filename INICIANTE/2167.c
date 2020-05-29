#include <stdio.h>

int main() {
  long int n, r, menor = -1, i;

  scanf("%ld", &n);
  for(i = 1; i <= n; i++) {
    scanf("%ld", &r);
    if(r < menor) {
      printf("%ld\n", i);
      return 0;
    }
    menor = r;
  } 
  printf("0\n");
  return 0;
}