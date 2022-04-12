#include "main.h"
/**
 * is_lower - check if is_lower.
 *
 * Return: Nothing.
 */
int _islower(char c)
{
char c;
if (c <= 'a' || c >= 'z')
{
return (0);
}    
return 1;
}
