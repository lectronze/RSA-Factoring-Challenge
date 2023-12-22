#include "rsa_factor.h"

/**
 * factorize - factorize a number in buff
 * @buff: pointer to file containing buff
 * Return: 0 success
 */
int factorize(char *buff)
{
	long long int num, i;

	num = atoi(buff);

	if (num % 2 == 0)
	{
		printf("%llu=%llu*%i\n", num, num / 2, 2);
		return (0);
	}
	i = 3;
	while (i * i <= num)
	{
		if (num % i == 0)
		{
			printf("%llu=%llu*%llu\n", num, num / i, i);
			return (0);
		}
		i++;
	}
	printf("%llu=%llu*%i\n", num, num, 1);
	return (0);
}
