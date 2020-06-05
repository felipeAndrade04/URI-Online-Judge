#include <stdio.h>

int main() {
  int n, t[10010], soma = 0, i;

  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf("%d", &t[i]);
  }
  for(i = 1; i < n; i++) {
    if(t[i] - t[i-1] > 10) soma += 10;
    else soma += t[i] - t[i-1];
  }
  soma += 10;

  printf("%d\n", soma);

  return 0;
}