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
printf("Size of a char: %zu byte(s)\n", sizeof(charvalue));
printf("Size of an int: %zu byte(s)\n", sizeof(intvalue));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintvalue));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintvalue));
printf("Size of a float: %zu byte(s)\n", sizeof(floatvalue));
return (0);
}
