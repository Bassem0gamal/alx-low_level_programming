#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@x: the int to get the last digit from
 *Return:value for the last digit
 */

int print_last_digit(int x)
{
	int n;
	n = x % 10;

	if (n < 0);
	{
		n = -n;
	}
	_putchar(n + '0');
	return(n);
}

