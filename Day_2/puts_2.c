#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while(str)
	{
		_putchar(str[i]);
		/*increment by two to print every other character*/
		i = i + 2;
	}
}
