#include <unistd.h>
/**
 * _putchar - write character c 
 * @c: the character
 * Return: 1 on success and otherwise -1 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
