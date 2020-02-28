#include "holberton.h"
/**
 *scan_prime - Function to scan prime
 *@a: Number to check
 *@n: Possible prime
 *Return: 1 if the number is prime
 */
int scan_prime(int a, int n)
{
	if (n < 2 || n % a == 0)
	{
		return (0);
	}
	else if (a > n / 2)
	{
		return (1);
	}
		return (scan_prime(a + 1, n));
}
/**
 *is_prime_number - Function to chacke primes
 *@n: number to check
 *Return: 1 if prime
 *
 */

int is_prime_number(int n)
{
	if (n == 2)

		return (1);

	return (scan_prime(2, n));

}
