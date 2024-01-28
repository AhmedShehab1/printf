#include "main.h"
#include <stdlib.h>
char *Char(char c)
{
	char *ptr;

	ptr = &c;
	return (ptr);
}

Size_t String_Size(char *string)
{
	Size_t i = 0;
	while (string[i] != 0)
	{
		i++;
	}
	return (i);
}