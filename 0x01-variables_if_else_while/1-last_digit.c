#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Last Integer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf(n % 10);
	return (0);
}
