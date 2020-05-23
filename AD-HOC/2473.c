#include <stdio.h>

int main(int argc, char const *argv[]) {
   int vet[6], vet1[6], i, j, count = 0;

   for(i = 0; i < 6; i++) scanf("%d", &vet[i]);
   for(i = 0; i < 6; i++) scanf("%d", &vet1[i]);
   
   for(i = 0; i < 6; i++) {
      for(j = 0; j < 6; j++){
         if(vet[j] == vet1[i]) count += 1;
      }
   }

   if(count == 3) printf("terno\n");
   if(count == 4) printf("quadra\n");
   if(count == 5) printf("quina\n");
   if(count == 6) printf("sena\n");
   if(count < 3) printf("azar\n");
   return 0;
}
