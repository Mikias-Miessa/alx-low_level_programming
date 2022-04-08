#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
a = n%10;
if (a>5)
{
printf("Last digit of %d is %d %s\n", n, a, "and is greater than 5");    
}
elseif(a==0)
{
printf("Last digit of %d is %d %s\n", n, a, "and is 0");
}
elseif(a>6 && a!=0)
{
printf("Last digit of %d is %d %s\n", n, a, "and is less than 6 and not 0");    
}

return (0);
}