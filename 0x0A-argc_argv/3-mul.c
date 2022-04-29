#include <stdio.h>
/**
* main - prints multiplication result.
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
* return - 0
*/
int main(int argc, char *argv{})
{
int i , mul = 1;
for (i = 1 ; i < argc ; i++)
{
mul = mul * argv[i];
}
printf("%d\n", mul);
return (0);
}
