#include "main.h"

/**
 * _memcpy - copies momery area
 * @dest: momery area
 * @src: source
 * @n: lengh of src to be copied
 *
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
