#include "main.h"

int main(void)
{
	/*declaring and allocating memory for an int ptr*/
	int *ptr = (int*)malloc(sizeof(int));
	/*if memory allocation was successful*/
	if (ptr != NULL) 
	{
		*ptr = rand();
		printf("Value: %d\n", *ptr);
		free(ptr);
	}
	/*if memory allocation failed*/
	else
	{
		printf("Memory allocation failed\n");
	}

	return 0;
}
