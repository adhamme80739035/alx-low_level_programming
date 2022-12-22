#include <stdlib.h>
#include <stdio.h>

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
	int num;

	for (num = 0 ; num < 10 ; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);

}
