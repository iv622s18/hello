#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include "func.h"


float D(float a, float b, float c)
{
	return (b * b) - (4 * a * c);
}

float X(float d, float a, float b, int num)
{
	return (-b + (num * sqrtf(d))) / (2 * a);
}

int check(float a, float b, float c)
{
	if (a == 0 || b == 0 || c == 0)
		return -1;
	return 0;
}
