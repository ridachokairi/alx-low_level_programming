#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0) printf("%d", n "is positive\n");
	if(n == 0) printf("%d", n "is zero\n");
	if(n < 0) printf("%d", n "is negative\n");
	return (0);
}
