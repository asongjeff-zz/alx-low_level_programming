#include <main.h>

/**
 * _isupper - function that checks for uppercase character
 * @c: int type number for ASCII character
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
