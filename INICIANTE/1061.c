#include <stdio.h>
#include <string.h>

int main() {
  int dI,hI,mI,sI;
  int dF,hF,mF,sF;
  int tD=0,tH=0,tM=0,tS=0;
  char str[10];

  scanf("%s %d", str, &dI);
  scanf("%d : %d : %d", &hI, &mI, &sI);
  scanf("%s %d", str, &dF);
  scanf("%d : %d : %d", &hF, &mF, &sF);
  
  tS = sF - sI;
  if(tS < 0) {
    tS += 60;
    tM -= 1;
  }

  tM += mF - mI;
  if(tM < 0) {
    tM += 60;
    tH -= 1;
  }

  tH += hF - hI;
  if(tH < 0) {
    tH += 24;
    tD -= 1;
  }

  tD += dF - dI;

  printf("%d dia(s)\n", tD);
  printf("%d hora(s)\n", tH);
  printf("%d minuto(s)\n", tM);
  printf("%d segundo(s)\n", tS);
  return 0;
}