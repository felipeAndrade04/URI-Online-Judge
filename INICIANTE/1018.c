#include <stdio.h>

int main() {
   int i, resto, cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0;
   
   scanf("%d", &resto);
   printf("%d\n", resto);
   while(resto > 0) {
      if(resto/100>=1) {
         cem = resto/100;
         resto = resto%100;         
      } else if(resto/50>=1) {
         cinquenta = resto/50;
         resto = resto%50;         
      } else if(resto/20>=1) {
         vinte = resto/20;
         resto = resto%20;
      } else if(resto/10>=1) {
         dez = resto/10;
         resto = resto%10;
      } else if(resto/5>=1) {
         cinco = resto/5;
         resto = resto%5;
      } else if(resto/2>=1) {
         dois = resto/2;
         resto = resto%2;
      } else if(resto/1>=1) {
         um = resto/1;
         resto = resto%1;
      }
   }
   
   printf("%d nota(s) de R$ 100,00\n",cem);
   printf("%d nota(s) de R$ 50,00\n",cinquenta);
   printf("%d nota(s) de R$ 20,00\n",vinte);
   printf("%d nota(s) de R$ 10,00\n",dez);
   printf("%d nota(s) de R$ 5,00\n",cinco);
   printf("%d nota(s) de R$ 2,00\n",dois);
   printf("%d nota(s) de R$ 1,00\n",um);

   return 0;
}
