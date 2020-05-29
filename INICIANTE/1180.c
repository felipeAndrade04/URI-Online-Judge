#include <stdio.h>

int main() {
  long long int n, v[1000000], i, menor=1000000, posicao;

  scanf("%lld", &n);
  for(i = 0; i < n; i++) {
    scanf("%lld", &v[i]);

    if(v[i] < menor) {
      menor = v[i];
      posicao = i;
    }
  }
  printf("Menor valor: %lld\n", menor);
  printf("Posicao: %lld\n",posicao);
  return 0;
}