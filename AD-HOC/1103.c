#include <stdio.h>

int main() {
  int h1,m1,h2,m2;
  int tMinutos, tHoras;

  while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) != EOF && !(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)) {
    tMinutos = 0, tHoras = 0;
    tMinutos += m2 - m1;
    if(tMinutos < 0) {
      tMinutos += 60;
      tHoras -= 1;
    }
    tHoras += h2 - h1;
    if(tHoras < 0) {
      tHoras += 24;
    }

    tMinutos += tHoras*60;
    printf("%d\n", tMinutos);
  }
  return 0;
}