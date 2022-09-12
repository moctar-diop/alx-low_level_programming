#include <stdio.h>

/**
 * main print lowercase alphabet
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
