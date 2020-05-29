#include <stdio.h>

int main() {
  unsigned long long int v[1000000], n, nota, i, posicao, maiorRepeticao=0;
  scanf("%llu", &n);
  for(i = 0; i < 1000000; i++) v[i] = 0;
  for(i = 0; i < n; i++) {
    scanf("%llu", &nota);
    v[nota]++;
  }
  for(i = 0; i < 1000000; i++) {
    if(v[i] >= maiorRepeticao) {
      maiorRepeticao = v[i];
      posicao = i;
    }
  }
  printf("%llu\n", posicao);
  return 0;
}