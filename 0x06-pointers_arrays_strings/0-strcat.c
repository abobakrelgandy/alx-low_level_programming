#inculde "main.h"

/**
 * _strcat - functions that concatenates
 *		two strings.
 *
 * @dest: pointer to destanation input
 * @src: pointer to souarce input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of the dest arrey*/
	while (dest[c])
		c++;

	/* iterate through each char src arrey value without null byte*/
	for (c2 = 0; src[c2]; c2++)
		/*append src[c2] to dest[c] while overwriting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
}
