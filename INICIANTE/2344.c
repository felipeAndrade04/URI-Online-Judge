#include <stdio.h>

int main() {
  int v;
  scanf("%d", &v);

  if(v == 0) printf("E\n");
  else if(v <= 35) printf("D\n");
  else if(v <= 60) printf("C\n");
  else if(v <= 85) printf("B\n");
  else if(v <= 100) printf("A\n");
  return 0;
}