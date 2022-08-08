#include "main.h"

/**
 * print_string - loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * _print_char - prints a character
 * @args: the arguments list
 *
 * Return: 1 (number of chars printed)
 */
int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
