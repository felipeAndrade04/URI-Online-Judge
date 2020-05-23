#include <stdio.h>

int main() {
  int n, l, c, quebrados=0, i;

  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%d %d", &l, &c);
    if(l > c) quebrados += c;
  }
  printf("%d\n", quebrados);
  return 0;
}