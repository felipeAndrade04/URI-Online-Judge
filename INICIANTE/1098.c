#include <stdio.h> 
#include <math.h>

int main() {
  float i;
  int j;

  for(i = 0; i <= 2.1; i = i + 0.2) {
    for(j = 1; j <= 3; j++) {
      if(fmod(i, 2) == (int)i) {
        printf("I=%d J=%d\n", (int)i, (int)i+(int)j);
      } 
      else if(fmod(i, 2) < 0.1) {
        printf("I=%d J=%d\n", (int)i, (int)i+(int)j);
      }
      else {
        printf("I=%.1f J=%.1f\n", i, j + i);
      }
    }
  }
}