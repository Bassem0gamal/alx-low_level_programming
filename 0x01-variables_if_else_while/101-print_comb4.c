#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++) /*hundreds place*/
	{
		for (b = (a + 1); b <= '9'; b++) /*tens=100s+1*/
		{
			for (c = (b + 1); c <= '9'; c++) /*ones*/
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7' || b != '8' || c != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
