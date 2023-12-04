#include "main.h"

int main()
{
	int x = 5, y = 10;

	printf("Before Swap: x = %d, y = %d\n", x, y);

	/* Call the swap function*/
	swap(&x, &y);

	printf("After Swap: x = %d, y = %d\n", x, y);

	return 0;
}
