#include "main.h"
/**
 * puts_half - prints half.
 *
 *@str: input string.
 */
void puts_half(char *str)
{
int i;
while (str[i])
{
i++;
}
if (i % 2 == 0)
_putchar(str[i / 2]);

_putchar(str[(i - 1) / 2]);
_putchar('\n');
}
