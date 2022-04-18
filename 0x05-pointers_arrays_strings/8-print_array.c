#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half.
 *
 *@a: pointer.
 *@n: integer.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i <= n ; i++ )
{
printf("%d, \n", a[i]);
}
_putchar('\n');
}
