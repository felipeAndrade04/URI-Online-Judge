#include <stdio.h>
#include <ctype.h>

int main() {
  int n, x, y;
  char c;
  scanf("%d", &n);
  while(n) {
    scanf("%d%c%d", &x, &c, &y);
    if(x == y) printf("%d\n", x * y);
    else if(islower(c)) printf("%d\n", y + x);
    else if(isupper(c)) printf("%d\n", y - x);
    n--;
  }
  return 0;
}