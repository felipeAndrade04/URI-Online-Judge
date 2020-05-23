#include <stdio.h>
#include <math.h>

int main() {
  int p, n, i, vitoria = 1;
  int altura, anterior, diferenca;

  scanf("%d %d", &p, &n);
  scanf("%d", &anterior);

  for(i = 1; i < n; i++) {
    
    scanf("%d", &altura);
    diferenca = fabs(altura-anterior);
    if(diferenca>p) vitoria = 0;
    anterior = altura;
  }
  
  if(vitoria != 0) printf("YOU WIN\n");
  else printf("GAME OVER\n");
  return 0;
} 