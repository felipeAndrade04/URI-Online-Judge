#include <stdio.h>
#include <string.h>

int main() {
   char c[10000];
   int x;
   scanf("%d", &x);
   while(x--){
      scanf("%s", c);
      printf("%.2f\n", strlen(c) * 0.01);
   }
   return 0;
}
