#include <stdio.h>

int main() {
  int n, v, mVelocidade, i;

  while(scanf("%d", &n) != EOF) {
    mVelocidade = 0;
    for(i = 0; i<n; i++) {
      scanf("%d", &v);
      if(v > mVelocidade) mVelocidade = v;
    }
    if(mVelocidade <= 10) printf("1\n");
    else if(mVelocidade < 20) printf("2\n");
    else if(mVelocidade >= 20) printf("3\n");
  }
  return 0;
}