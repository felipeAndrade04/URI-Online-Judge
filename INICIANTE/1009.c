#include <stdio.h>

int main(){
	double v, sal, nsal;
	char nome[10];
	scanf("%s", nome);
	scanf("%lf", &sal);
	scanf("%lf", &v);
	nsal = sal + (v * 0.15);

	printf("TOTAL = R$ %.2lf\n", nsal);
	return 0;
}