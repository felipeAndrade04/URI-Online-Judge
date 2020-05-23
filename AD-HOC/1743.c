#include <stdio.h>

int main() {
  int v1[5], v2[5], i, cont = 0;

  for(i = 0; i < 5; i++) scanf("%d", &v1[i]);
  for(i = 0; i < 5; i++) scanf("%d", &v2[i]);

  for(i = 0; i < 5; i++) {
    if(v1[i] != v2[i]) cont++;
  }

  if(cont == 5) printf("Y\n");
  else printf("N\n"); 

}