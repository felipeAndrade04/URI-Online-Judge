#include<stdio.h>
#include<math.h>

int main() {
   float x,x1,y,y1,z;
   scanf("%f %f", &x, &y);
   scanf("%f %f", &x1, &y1);

   z = sqrt(pow(x1-x, 2) + pow(y1-y, 2));
   printf("%.4f\n", z);
   return 0;
}
