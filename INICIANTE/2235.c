#include <stdio.h>

int main() {
  int c1, c2, c3;

  scanf("%d %d %d", &c1, &c2, &c3);
  if(c1 == c2 || c1 == c3 || c2 == c3) printf("S\n");
  else if(c1+c2 == c3 || c1+c3 == c2 || c2+c3 == c1) printf("S\n");
  else printf("N\n");
  
  return 0;
}