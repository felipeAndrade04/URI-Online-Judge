#include <stdio.h>

int main() {
   int x, h,m,y;

   scanf("%d", &x);

   h = x/3600;
   y = x % 3600;
   m = y/60;
   y = y % 60;


   printf("%d:%d:%d\n",h,m,y);
   return 0;
}
