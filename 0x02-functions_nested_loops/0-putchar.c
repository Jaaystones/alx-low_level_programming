#include "main.h"
/**
 * main - Write a program that prints _putchar
 * code to be followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "main";
	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
