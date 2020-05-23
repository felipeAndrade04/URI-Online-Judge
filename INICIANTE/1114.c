#include <stdio.h>

int main() {
   int senha;
   while (scanf("%d", &senha) != EOF ) {
      if(senha == 2002) {
         printf("Acesso Permitido\n");
         return 0;
      }
      printf("Senha Invalida\n");
   }
   
   return 0;
}
