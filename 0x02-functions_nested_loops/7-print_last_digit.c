#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @lstd: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int lstd)
{
	int lstd;

	lstd = (lstd % 10);

	if (lstd < 0)
	{
		lstd = (-1 * lstd);
	}

	_putchar(lstd + '0');
	return (lstd);
}
