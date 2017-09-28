#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "func.h"

int main(){
	float a, b, c, d, x1, x2;
	printf("%s", "Коэффициент a: ");
	scanf("%f", &a);
	printf("%s", "Коэффициент b: ");
	scanf("%f", &b);
	printf("%s", "Коэффициент c: ");
	scanf("%f", &c);
	if (check(a, b, c) == 0){
		d = D(a, b, c);
		if (d < 0)
		{
			printf("Корней нет\n");
		}
		else if (d == 0)
		{
			printf("Один корень: ");
			x1 = X(d, a, b, 1);
			printf("x = %f\n", x1);
		}
		else
		{
			printf("Два корня\n");
			x1 = X(d, a, b, 1);
			x2 = X(d, a, b, -1);
			printf("x1 = %f\n", x1);
			printf("x2 = %f\n", x2);
		}
		return 0;
	}
	else 
		printf("Invalid data");
}
