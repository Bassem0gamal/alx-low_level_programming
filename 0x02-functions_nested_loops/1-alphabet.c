#include "main.h"

/**
 *Print_alphabet
 *
 *main: Entry point
 *
 *return: 0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
