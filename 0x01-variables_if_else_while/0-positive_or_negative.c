#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* *
 * main -this is where the code is positive
 *  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the code examines whetherthe random number is positive*/
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zer", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
