#include <stdio.h>
/**
 * main - Displaying sizeof data types.
(*
 * Return: 0 on success
 */
 int main(void)
 {
printf("Size of char: %zu byte(s)", sizeof(char));
printf("Size of an int: %zu byte(s)", sizeof(int));
printf("Size of a long int: %zu byte(s)", sizeof(long int));
printf("Size of long long int: %zu byte(s)", sizeof(long long int));
printf("Size of float: %zu byte(s)", sizeof(float));
return (0);
 }
 