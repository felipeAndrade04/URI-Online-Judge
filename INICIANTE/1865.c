#include <stdio.h>
#include <string.h>

int main() {
  int n, x;
  char nome[50];

  scanf("%d", &n);

  while(n--) {
    scanf("%s %d", nome, &x);
    
    if(strcmp(nome, "Thor") == 0) printf("Y\n");
    else printf("N\n");
  }
  return 0;
}