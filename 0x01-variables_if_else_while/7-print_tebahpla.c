#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 *
 * Description: prints alphabets fom z to a
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
