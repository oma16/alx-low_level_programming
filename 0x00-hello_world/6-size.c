#include <stdio.h>
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;

printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a float: %zu bytes\n", sizeof(floatType));
printf("Size of a double: %zu bytes\n", sizeof(doubleType));
printf("Size of a char: %zu bytes\n", sizeof(charType));
return (0);
}
