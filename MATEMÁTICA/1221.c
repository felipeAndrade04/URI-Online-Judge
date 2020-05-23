#include <stdio.h>
#include <math.h>

int main(){
    int n, primo,i;
    long int x;

    scanf("%d", &n);

    while(n--){
            primo = 0;
            scanf("%ld", &x);
             if(x<=2){
            if(x == 0){
                 printf("Not Prime\n");
                 continue;
            }
            if(x == 1){
                 printf("Not Prime\n");
                 continue;
            }
            if(x == 2){
                 printf("Prime\n");
                 continue;
            }
          }
           else{
            for(i = 2; i < sqrt(x)+1; i++){
                    if(x%i == 0) primo++;
                    if(primo == 2) break;
            }
            if(primo >= 1) printf("Not Prime\n");
            else printf("Prime\n");
       }
    }
    return 0;
}