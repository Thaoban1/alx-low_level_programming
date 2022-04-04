#include "main.h"
#include <stdio.h>

/**
 * _strlen - to return lenth
 *@s: ponter to string to return
 * Return: Always success
 */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
