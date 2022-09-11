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
printf("Size a of char: %zu byte(s)\n", sizeof(charvalue));
printf("Size an of int: %zu byte(s)\n", sizeof(intvalue));
printf("Size a of long int: %zu byte(s)\n", sizeof(longintvalue));
printf("Size a of long long int: %zu byte(s)\n", sizeof(longlongintvalue));
printf("Size a of float: %zu byte(s)\n", sizeof(floatvalue));
return (0);
}
