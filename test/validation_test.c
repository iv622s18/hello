#include <stdio.h>
#include <math.h>
#include "../src/func.h"
#include "../thirdparty/ctest.h"

CTEST(check_input_data, check)
{
	const float a = 0;
	const float b = 1;
	const float c = 3;
	const float result = check(a, b, c);
	const float expected = -1;
	ASSERT_DBL_NEAR(expected, result);
}


