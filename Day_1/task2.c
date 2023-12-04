#include "main.h"

int main() 
{
	/*declared and initialized an array*/
	int arr[] = {1, 2, 3, 4, 5};
	/*declared and initialized pointer to the array*/
	int *ptr = arr;
	/*looping through the array*/
	for (int i = 0; i < 5; i++) 
	{
		/*printing each element*/
		printf("%d ", *(ptr + i));
	}
	printf("\n");

	return 0;

}
