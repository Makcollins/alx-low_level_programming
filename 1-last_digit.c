
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int lastDigit(int num)
{
    // return the last digit
    return (num % 10);
}
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int last_digit = lastDigit(n);
	
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5 \n", n,last_digit );
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0 \n",  n,last_digit );
	else if (last_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0 \n",  n,last_digit );
	return (0);
}
