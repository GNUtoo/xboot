#include <math.h>
#include <xboot/module.h>

float fdimf(float x, float y)
{
	if (isnan(x))
		return x;
	if (isnan(y))
		return y;
	return x > y ? x - y : 0;
}
EXPORT_SYMBOL(fdimf);
