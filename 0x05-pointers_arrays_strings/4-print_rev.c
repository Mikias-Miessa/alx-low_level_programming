#include "main.h"
/**
 * print_rev - prints a string in a revers .
 *@s: pointer
 * Return: Nothing.
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] = '\0')
{
i++;
}
while (i--)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
