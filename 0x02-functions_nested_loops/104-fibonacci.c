#include <stdio.h>

/**
  * main - Prints the first 98 fibonacci numbers
  *
  * Return: 0 (Success)
  */
int main(void)
{
	unsigned long int i, j, k, o, l, m1, m2;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	o = j / 1000000000;
	l = j % 1000000000;
	m1 = k / 1000000000;
	m2 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", m1 + (m2 / 1000000000));
		printf("%lu", m2 % 1000000000);
		m1 = m1 + o;
		o = m1 - o;
		m2 = m2 + l;
		l = m2 - l;
	}

	printf("\n");

	return (0);
}
