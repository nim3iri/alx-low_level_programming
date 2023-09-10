#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> 42da1e626b199e7908f56547f27c8d496c774b09
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
<<<<<<< HEAD
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is zero|n", n);
=======
        if (n < 0)
        {
                printf("%d is %s\n" , n, :negative");
        }
        else if (n > 0)
        {
                printf("%d is %s\n" , n, :positive");
        }
        else
        {
                printf("%d is %s\n" , n, :zero");
        }
>>>>>>> 42da1e626b199e7908f56547f27c8d496c774b09
	return (0);
}
