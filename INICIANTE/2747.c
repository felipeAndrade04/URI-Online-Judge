#include <stdio.h>

int main() {
  int i, j;
  for(i = 1; i <= 39; i++) {
    printf("-");
  }
  printf("\n");
  for(i = 1; i <= 5; i++) {
    for(j = 1; j <= 38; j++) {
      if(j == 1 || j == 38) printf("|");
      if(j < 38) printf(" ");
    }
    printf("\n");
  }
  for(i = 1; i <= 39; i++) {
    printf("-");
  }
  printf("\n");
}