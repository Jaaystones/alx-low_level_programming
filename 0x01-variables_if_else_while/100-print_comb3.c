#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 0; d < 90; d++)
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		if (d != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
