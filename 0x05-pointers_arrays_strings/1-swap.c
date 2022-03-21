#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void swap(int *a, int *b);
int main() {
	int m = 10, n = 20;


	swap(&m, &n);
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
