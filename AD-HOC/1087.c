#include <stdio.h>
#include <math.h>

int main() {
  int x1, y1, x2, y2, x, y, total;

  while (scanf("%d %d %d %d", &x1, &y1, &x2, &y2) != EOF && (x1 != 0 || y1 !=0 || x2 != 0 || y2 != 0)) {
    x = fabs(x1 - x2);
    y = fabs(y1 - y2);

    if(x1 == x2 && y1 == y2) total = 0;
    else if(x1 == x2 && y1 != y2) total = 1;
    else if(x1 != x2 && y1 == y2) total = 1;
    else if(x == y) total = 1;
    else total = 2;

    printf("%d\n", total);
  }
  
}