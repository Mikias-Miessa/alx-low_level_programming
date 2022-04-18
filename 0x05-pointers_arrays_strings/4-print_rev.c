#include "main.h"
/**
 * print_rev - prints a string in a revers .
 *@s: pointer
 * Return: Nothing.
 */
void print_rev(char *s)
{
while (*s = '\0')
{
_putchar(*s--);
}
_putchar('\n');
}
