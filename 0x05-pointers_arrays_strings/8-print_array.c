#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array.
 *
 *@a: pointer.
 *@n: integer.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
if (i == n - 1)
printf("%d", a[i]);

printf("%d, ", a[i - 1]);
}
_putchar('\n');
}
