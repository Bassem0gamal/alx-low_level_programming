#include "main.h"
#include <unistd.h>
/**
 *_putchar
 *
 *return: 1 On success
 *return: 0 on error
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
