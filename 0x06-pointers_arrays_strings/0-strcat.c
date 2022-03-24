#include <stdio.h>
#include "main.h"

/**
 * _strcat - function to concat string
 * @dest: destination of the strung
 * @src: source of the string
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	 int j = 0;

	while (dest[i] != '\0')
		{
			i++;
		}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
