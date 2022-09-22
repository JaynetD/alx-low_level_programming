#include "main.h"

/**
 *_strcat - concatenates the string pointed by @src to 
 *the end of the string pointed to by @dest
 *@dest: String that will be appended 
 *@src: String that will be concatenated upon
 *Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src);
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
