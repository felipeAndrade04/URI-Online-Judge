#include <stdio.h>

int main() {
  int q, v, i, satisfeito = 0, naoSatisfeito = 0;
  scanf("%d", &q);

  for(i = 0; i < q; i++) {
    scanf("%d", &v);
    if(v) naoSatisfeito++;
    else satisfeito++;
  }
  if(satisfeito > naoSatisfeito) printf("Y\n");
  else printf("N\n");
  return 0;
}