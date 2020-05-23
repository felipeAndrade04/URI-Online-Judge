#include <stdio.h>

int main(){
	int a, b;
	float c, sal;
	scanf("%d\n%d\n%f", &a,&b,&c);

	sal = b*c;

	printf("NUMBER = %d\n", a);
	printf("SALARY = U$ %.2f\n", sal);
	return 0;
}