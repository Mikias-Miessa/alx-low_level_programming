#include "main.h"
/**
 * _isupper - check if it is uppercase character.
 *@c character.
 * Return: 1 if it is upper , 0 if otherwise
 */
int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
return (1);

return (0);
}
