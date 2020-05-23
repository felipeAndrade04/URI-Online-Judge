#include <stdio.h>

int main() {
   int i, resto, restoCentavos, cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, 
        umMoeda=0, cinquentaMoeda=0, vinteCincoMoeda=0, dezMoeda=0, cincoMoeda=0, umCentavoMoeda=0;
   double x;
    
   scanf("%lf", &x);
   resto = (int)x;
   restoCentavos = (x - resto) * 100;
    
   cem = resto/100;
   resto = resto%100;
   
   cinquenta = resto/50;
   resto = resto%50;   
   
   vinte = resto/20;
   resto = resto%20;  
   
   dez = resto/10;
   resto = resto%10;  
   
   cinco = resto/5;
   resto = resto%5;  
   
   dois = resto/2;
   resto = resto%2;  
   
   //moedas
   
   umMoeda = resto/1;
   resto = resto%1;  
   
   cinquentaMoeda = restoCentavos/50;
   restoCentavos = restoCentavos%50;  
   
   vinteCincoMoeda = restoCentavos/25;
   restoCentavos = restoCentavos%25; 
   
   dezMoeda = restoCentavos/10;
   restoCentavos = restoCentavos%10;  
   
   cincoMoeda = restoCentavos/5;
   restoCentavos = restoCentavos%5;  
   
   umCentavoMoeda = restoCentavos/1;
   restoCentavos = restoCentavos%1;  
         
   printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n",cem);
   printf("%d nota(s) de R$ 50.00\n",cinquenta);
   printf("%d nota(s) de R$ 20.00\n",vinte);
   printf("%d nota(s) de R$ 10.00\n",dez);
   printf("%d nota(s) de R$ 5.00\n",cinco);
   printf("%d nota(s) de R$ 2.00\n",dois);

   printf("MOEDAS:\n");
   printf("%d moeda(s) de R$ 1.00\n",umMoeda);
   printf("%d moeda(s) de R$ 0.50\n",cinquentaMoeda);
   printf("%d moeda(s) de R$ 0.25\n",vinteCincoMoeda);
   printf("%d moeda(s) de R$ 0.10\n",dezMoeda);
   printf("%d moeda(s) de R$ 0.05\n",cincoMoeda);
   printf("%d moeda(s) de R$ 0.01\n",umCentavoMoeda);
   return 0;
}
