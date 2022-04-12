#include "main.h"
/**
 * times_table - 9 by 9 times table
 *
 * Description: prints 9 by 9 multiplication table
 * Return: Nothing.
 */
void times_table(void)
{
int i, j;
for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
if (j == 0)
{
_putchar(48);
continue;}

int a;
a = i * j;
if (a > 9)
{

_putchar(',');
_putchar(' ');
_putchar(a / 10 + 48);
_putchar(a % 10 + 48);

}
else
{
_putchar(' ');
_putchar(a + 48);
}
}
_putchar('\n');
}
}
