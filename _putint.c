#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putint(int c)
{
		unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}
/**
 * print_porcentage - %
 *
 * Return: 1.
 */
int print_porcentage(void)
{
	_putchar('%');
	return (1);
}
