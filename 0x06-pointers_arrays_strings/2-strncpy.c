#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string with n
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
chat *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] - src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++:
	}

	return (dest);
}
