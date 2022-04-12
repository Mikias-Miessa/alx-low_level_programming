#include "main.h"
/**
 * _islower - cheks sign of a number.
 *
 *@n: character.
 *
 * Return: value on success.
 */
int print_sign(int n)
{
if ( n > 0)
_putchar('+');
return (1);
if (n == 0)
_putchar('0');
return (0);
if (n < 0)
_putchar('-');
return(-1);
}
