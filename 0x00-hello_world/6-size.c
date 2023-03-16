#include <stdio.h>
/**
* main - A program that prints the size of verious computer types
*
* Return: 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
print f("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
print f("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
print f("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
print f("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
print f("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
