#include "main.h"
/**
 * _puts - prints a string .
 *@str: pointer
 * Return: Nothing.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
*str++;
}
_putchar('\n');
}
