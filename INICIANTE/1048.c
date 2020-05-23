#include <stdio.h>

int main() {
   float salario, reajuste, novoSalario;
   int percentual;
   scanf("%f", &salario);

   if(salario <= 400) {
      reajuste = salario * 0.15;
      novoSalario = salario + reajuste;
      percentual = 15;
   }
   else if(salario <= 800) {
      reajuste = salario * 0.12;
      novoSalario = salario + reajuste;
      percentual = 12;
   }
   else if(salario <= 1200) {
      reajuste = salario * 0.10;
      novoSalario = salario + reajuste;
      percentual = 10;
   }
   else if(salario <= 2000) {
      reajuste = salario * 0.07;
      novoSalario = salario + reajuste;
      percentual = 7;
   }
   else if(salario > 2000) {
      reajuste = salario * 0.04;
      novoSalario = salario + reajuste;
      percentual = 4;
   }

   printf("Novo salario: %.2f\n", novoSalario);
   printf("Reajuste ganho: %.2f\n", reajuste);
   printf("Em percentual: %d %%\n", percentual);
   
   return 0;
}
