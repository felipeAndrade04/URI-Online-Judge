#include <stdio.h>

int main() {
  int n=1, grenais=0, inter=0, gremio=0, empate=0, golsInter=0, golsGremio=0;
  
  
  while(n == 1) {
    scanf("%d %d", &golsInter, &golsGremio);
    
    grenais++;
    if(golsInter > golsGremio) inter++;
    else if(golsInter < golsGremio) gremio++;
    else empate++;

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &n);
    if(n == 2) {
      printf("%d grenais\n", grenais);
      printf("Inter:%d\n", inter);
      printf("Gremio:%d\n", gremio);
      printf("Empates:%d\n", empate);
      if(inter > gremio) printf("Inter venceu mais\n");
      else if(gremio > inter) printf("Gremio venceu mais\n");
      else printf("Nao houve vencedor\n");
    }

  }
  return 0;
  }