#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @resp:int
 * @n: int
 * Return: 0 or 1
 */

int check_prime(int n, int resp);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

