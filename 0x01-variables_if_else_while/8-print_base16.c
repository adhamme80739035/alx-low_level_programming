#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)

{

	/* your code goes there */
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);

}
