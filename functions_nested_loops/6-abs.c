#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @r: integer value
 *
 * Return: return the corresponding absolute value
 * for example -8x(-1)=8
 *
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
