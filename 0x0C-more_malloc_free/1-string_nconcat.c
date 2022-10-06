#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *		most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *	 Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int s1_len;
	unsigned int str_len;
	char *str;

	s1_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		s1_len++;

	str_len = s1_len + n;

	str = malloc(sizeof(char) * (str_len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		str[i] = s2[j];
	}

	str[i] = '\0';

	return (str);
}
