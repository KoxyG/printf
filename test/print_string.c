#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

int print_string(char *s)
{
	int j;
	char c;
	
	if (s == NULL)
		return (0);
	
	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
	}
	
	return(j);
}
