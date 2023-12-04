#include "main.h"

int main(void)
{
	/*declaring and initializing an int variable*/
	int a = 10;
	/*declaring and initializing a pointer*/
	int *ptr = &a;
	/*printing unmodified version of a */
	printf("Unmodified version of a: %d\n", *ptr);
	/*modifiying the value of the int using the pointer*/
	*ptr = 60;
	/*printing modified version*/
	printf("Modified version of a: %d\n", *ptr);

	return	(0);
}
