#include "main.h"
/**
 * _memset - Fill a block of memory with a specific value
 * @s: pointer
 * @b: char
 * @n: unsigned int
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (: n > 0; i++)
	{
		s[index] = b;
		n --;
	}
	return (s);
}
