#include <stdio.h>

int main() {
  int n, x, resto, somatorio = 0;

  scanf("%d", &n);

  while(n--) {
    scanf("%d", &x);

    if(x % 3 == 0) somatorio += x;
    else {
      resto = x % 3;
      somatorio += x - resto;
    }
  }

  printf("%d\n", somatorio);

  return 0;
}