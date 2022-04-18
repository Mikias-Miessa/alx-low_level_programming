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
for (i = 1 ; i <= n ; i++)
{
printf("%d, ", a[i]);
}
_putchar('\n');
}
