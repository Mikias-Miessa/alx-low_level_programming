#include <stdio.h>
/**
 * main - Lowercase Letters!.
(*
 * Return: 0 on success
 */
 int main(void)
 {
int i;
int j;
for (i = 0 ; i < 9 ; i++)
{
for (j = 1 ; i < 10 ; j++)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
