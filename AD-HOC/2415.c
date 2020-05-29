#include <stdio.h>

int main() {
  unsigned long long int n, v, anterior=0, cont=1, maiorCont=0, i;
  scanf("%llu", &n);

  for(i = 0; i < n; i++) {
    scanf("%llu", &v);
    if(v != anterior) {
      if(cont > maiorCont) maiorCont = cont;
      cont = 1;
    }
    else {
      cont++;
      if(cont > maiorCont) maiorCont = cont;
    }
    anterior = v;

  }
  printf("%llu\n", maiorCont);
}