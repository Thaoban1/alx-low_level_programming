#include <unistd.h>
#include "main.h"

/**
 * _puts - function to print
 * @c: pointer to string
 * Return: Always 0.
 * On error, -1 is returned
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

