#include "main.h"
/**
 * positive_or_negative - checks for positive or negative numbers
 *
 * 0i: the number to be checked
 *
 *Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printif("%d is negative", i);
	else
		printif("%d is positive", i);
}
