/* include <stdio.h> */

/**
 * main - entry point
 *
 *
 * printf: prints string
 *
 * Return: always returns 0
 */

int main(void)
{
char charvalue;
int intvalue;
long int longintvalue;
long long int longlongintvalue;
float floatvalue;
int printf(const char *format, ...);
printf("Size of char: %zu byte(s)\n", sizeof(charvalue));
printf("Size of int: %zu byte(s)\n", sizeof(intvalue));
printf("Size of long int: %zu byte(s)\n", sizeof(longintvalue));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintvalue));
printf("Size of float: %zu byte(s)\n", sizeof(floatvalue));
return (0);
}
