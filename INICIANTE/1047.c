#include <stdio.h>

int main() {
  int horaInicial, minutoInicial, horaFinal, minutoFinal, totalHora=0, totalMinuto=0;

  scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

  totalHora = horaFinal - horaInicial;

  if(totalHora <= 0 && minutoFinal <= minutoInicial) totalHora += 24;
  
  totalMinuto = minutoFinal - minutoInicial;

  if(totalMinuto < 0) {
    totalMinuto += 60;
    totalHora -= 1;
  } 
  
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalHora, totalMinuto);
  return 0;
}