#include <stdio.h>

int main() {
  int n, s, v, menor, i;

  scanf("%d %d", &n, &s);
  menor = s;
  for(i = 0; i < n; i++) {
    scanf("%d", &v);
    s = s + v;
    if(s < menor) menor = s;
  }
  printf("%d\n", menor);
  return 0;
}