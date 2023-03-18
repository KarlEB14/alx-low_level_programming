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
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("%d", x);
	return (0);
}
