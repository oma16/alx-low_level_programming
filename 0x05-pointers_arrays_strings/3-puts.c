#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: string output
 * Return: string
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
