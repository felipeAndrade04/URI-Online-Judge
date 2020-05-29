#include <stdio.h>

int main() {
  long long int v[1000], i, n, k, p, cont;

  while(scanf("%lld %lld", &n, &k) != EOF && n != 0 && k != 0) {
    cont = 0;
    for(i = 0; i < 1000; i++) v[i] = 0;
    for(i = 0; i < n; i ++) {
      scanf("%lld", &p);
      v[p]++;
    }
    for(i = 0; i < 1000; i++) {
      if(v[i] >= k) cont++;
    }
    printf("%lld\n", cont);
  }
  return 0;
}