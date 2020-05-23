#include <stdio.h>

int main() {
  long int n , c, v, i, maior = 0;

  scanf("%ld %ld", &n, &c);
  for(i = 1; i < n; i++) {
    scanf("%ld", &v);
    if(v > maior) maior = v;
  } 
  if(c >= maior) printf("S\n");
  else printf("N\n");
}