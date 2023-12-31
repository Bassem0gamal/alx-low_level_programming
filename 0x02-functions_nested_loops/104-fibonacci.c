#include <stdio.h>

/**
  * main - Prints the first 98 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;
	int j = 1, k = 2;

	while (i < 98)
	{
		if (i == 0)
			printf("%d", j);
		else if (i == 1)
			printf(", %d", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %d", k);
		}

		++i;
	}

	printf("\n");
	return (0);
}
