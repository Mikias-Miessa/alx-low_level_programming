#include "main.h"
/**
 * print_rev - prints a string in a revers .
 *@s: pointer
 * Return: Nothing.
 */
void print_rev(char *s)
{
int i = 0;
while (*s != '\0')
{
*s++;
i++;
}
while (i > 0)
{
_putchar(*s--);
i--;
}
_putchar('\n');
}
