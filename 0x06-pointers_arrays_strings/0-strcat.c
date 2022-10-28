#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @scr: copy from
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *scr)
{
	int i;
	int j;

	i = 0;
	while (dest [i] != '\0')
	{
		i++;
	}
	j = 0;
	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
