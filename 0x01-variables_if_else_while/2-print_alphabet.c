#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, followed by a new line
 *
 *Return: Always 0 (Success)
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
