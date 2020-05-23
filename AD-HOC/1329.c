#include <stdio.h>

int main() {
  int n, v, maria, joao, i;

  while(scanf("%d", &n) != EOF && n != 0) {
    maria = 0;
    joao = 0;
    for(i = 0; i<n; i++) {
      scanf("%d", &v);
      if(v) joao++;
      else maria++; 
    }
    printf("Mary won %d times and John won %d times\n", maria, joao);
  }
  return 0;
}