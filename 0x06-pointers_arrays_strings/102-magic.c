#include "main.h"
#include <stdio.h>
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	
	/* -  write you code
	 * -  you are not allowed you
	 * - you are not allowed 
	 * - you are not allowed 
	 */

	*(p + 5) = 98;

	/* ....... print 98\n */
	printf("a[2] = %d\n", a[2]);

	return (0);
}
