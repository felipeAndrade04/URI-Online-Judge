#include <stdio.h>
#include <math.h>

int main() {
  long int n, x, y, rafael, beto, carlos;
  scanf("%ld", &n);

  while(n--) {
    scanf("%ld %ld", &x, &y);

    rafael = pow(3*x, 2) + pow(y, 2);
    beto = 2*pow(x, 2) + pow(5*y, 2);
    carlos = -100*x + pow(y, 3);

    if(rafael > beto && rafael > carlos) printf("Rafael ganhou\n");
    else if(beto > rafael && beto > carlos) printf("Beto ganhou\n");
    else if(carlos > rafael && carlos > beto) printf("Carlos ganhou\n");
  }
  return 0;
}