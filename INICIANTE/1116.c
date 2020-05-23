#include <stdio.h>

int main() {
  int n;
  float divisao, x, y;
  scanf("%d", &n);
  while(n--) {
    scanf("%f %f", &x, &y);
    if(y == 0) printf("divisao impossivel\n");
    else {
      divisao = x/y;
      printf("%.1f\n", divisao);
    }
  }
  return 0;
}