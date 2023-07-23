#include "main.h"

/**
 * is_printable - Accesses if a char is printable
 * @c: Char to be accessed.
 *
 * Return: 1 if c is printable, otherwise 0
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Include ascci in hexadecimal code to buffer
 * @buffer: Array of characters.
 * @i: Index to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Prooves if a char is a digit
 * @c: Char to be accessed
 *
 * Return: 1 if c is a digit, otherwise 0
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Assigns a number to the specified size
 * @num: Number to be assigned.
 * @size: Number indicating the type to be assigned.
 *
 * Return: Assigned value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Assigns a number to the specified size
 * @num: Number to be assigned
 * @size: Number indicating the type to be assigned
 *
 * Return: Assigned value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
