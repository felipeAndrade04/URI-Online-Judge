#include <stdio.h>
#include <math.h>

int main() {
  unsigned long long int v, n, i, total, placas;
  scanf("%llu %llu", &v, &n);
  total = v * n;
  
  for(i = 10; i <= 80; i+=10) {
    placas = (total * i) / 100;
    if((total * i) % 100 != 0) placas++;
    printf("%llu ", placas);
  }
  placas = (total * 90) / 100;
  if((total * i) % 100 != 0) placas++;
  printf("%llu\n", placas);

  return 0;
}

