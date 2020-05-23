#include<stdio.h>

int main(){
   int R, A, B, X = 0;
   int Va = 0;
   int Vb = 0;
   

   while(scanf("%d", &R) != EOF && R != 0){
      Va = 0;
      Vb = 0;
      X++;
      while(R>0){
         
         scanf("%d %d", &A, &B);
            Va = Va + A;
            Vb = Vb + B;
         
         R--;
      }
      if(Va > Vb){
         printf("Teste %d\n", X);
         printf("Aldo\n");
      }
      if(Vb > Va){
         printf("Teste %d\n", X);
         printf("Beto\n");
      }
      printf("\n");
   }
}