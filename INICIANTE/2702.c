#include <stdio.h>

int main() {
  int frango, bife, massa, frangoPedido, bifePedido, massaPedido, totalPassageiros = 0;
  scanf("%d %d %d", &frango, &bife, & massa); 
  scanf("%d %d %d", &frangoPedido, &bifePedido, & massaPedido);

  if(frangoPedido > frango) totalPassageiros = frangoPedido - frango;
  if(bifePedido > bife) totalPassageiros += bifePedido - bife;
  if(massaPedido > massa) totalPassageiros += massaPedido - massa;

  printf("%d\n", totalPassageiros);
  return 0;
}