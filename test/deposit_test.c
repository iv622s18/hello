#include <stdio.h>
#include <math.h>
#include "../src/func.h"
#include "../thirdparty/ctest.h"

CTEST(disc_test, D_pol)
{
	const float a = 1;
	const float b = 3;
	const float c = 1;

	const float result = D(a, b, c);

	const float expected = 5;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(disc_test, d_equal_zero)
{
	const float a = 1;
	const float b = 2;
	const float c = 1;

	const float result = D(a, b, c);

	const float expected = 0;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(disc_test, d_otr)
{
	const float a = 1;
	const float b = 1;
	const float c = 1;

	const float result = D(a, b, c);

	const float expected = -3;
	ASSERT_DBL_NEAR(expected, result);
}
CTEST(x_test, D_pol_first)
{
	const float d = 1;
	const float a = 1;
	const float b = 3;
	const int num = 1;

	const float result = X(d, a, b, num);

	const float expected = -1;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(x_test, d_pol_second)
{
	const float d = 1;
	const float a = 1;
	const float b = 3;
	const int num = -1;

	const float result = X(d, a, b, num);

	const float expected = -2;
	ASSERT_DBL_NEAR(expected, result);
}

CTEST(x_test, d_equal_zero)
{
	const float d = 0;
	const float a = 1;
	const float b = 2;
	const int num = 1;

	const float result = X(d, a, b, num);

	const float expected = -1;
	ASSERT_DBL_NEAR(expected, result);
}
