#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  while(n--) {
    if(n > 0) printf("Ho ");
    else printf("Ho!\n");
  }

  return 0;
}