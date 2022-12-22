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

	int n;
	int l;
	char c[100] = "Last digit of";


	srand(time(0));

	n = rand() - RAND_MAX / 2;
	l = n % 10 ;

	/* your code goes there */
	if (l > 5)
		printf("%s %i is %d and is greater than 5\n", c, n, l);
	else if (l < 6)
		printf("%s %i is %d and is less than 6 and not 0", c, n, l);
	else
		printf("%s %i is %d and is %d", c, n, l, l);

	return (0);

}
