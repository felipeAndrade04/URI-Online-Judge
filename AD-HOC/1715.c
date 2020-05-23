#include <stdio.h>

int main() {
   int n, m, i, j, count = 0, gol = 0;
   scanf("%d %d", &n, &m);
   int g[n][m];

   for(i = 0; i < n; i++) {
      for(j = 0; j < m;j++) scanf("%d", &g[i][j]);
   }

   for(i = 0; i < n; i++) {
      count = 0;
      for(j = 0; j < m;j++) {
         if(g[i][j] != 0) count += 1;         
      }
      if(count == m) gol += 1;
   }
   printf("%d\n", gol);
   return 0;
}
