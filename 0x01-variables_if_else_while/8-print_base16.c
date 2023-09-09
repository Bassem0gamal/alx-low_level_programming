#include <stdio.h>

/**
 *main - prints hexadecimal base 0123456789abcdef, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int l = 'a';

	while (n <= '9') /*print 0-9*/
	{
		putchar(n);
		n++;
	}

	while (l <= 'f') /*print a-f to finish hexbase*/
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);
}
