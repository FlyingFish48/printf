#include <unistd.h>
/**
 * _putchar - prints char c
 * @c: char to print
 * Return: on success 1
 * On error, -1 is returned, otherwise NULL
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
