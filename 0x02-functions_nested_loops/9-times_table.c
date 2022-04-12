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
int a;
a = i * j;
_putchar(a);
}
_putchar('\n');
}
}
