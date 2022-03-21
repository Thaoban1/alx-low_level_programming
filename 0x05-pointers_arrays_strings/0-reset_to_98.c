#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int n = 40;
int *pn = &n;
void func (int *pn);
*&pn = 98;

int main () 
{
	_putchar (n);
}
