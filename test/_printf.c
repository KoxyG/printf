#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 *_printf - entry point of the function
 */

int _printf(const char *format, ...)
{
	char *p;
	int len_format, i;
	va_list ap;
	va_start(ap, format);
	len_format = 0;


	for (i = 0; format[i] != '\0';i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
			}
			else if (format[i + 1] == 'c')
			{
				_putchar(va_arg(ap, int));
				i++;
			}
			else if (format[i + 1] == 's');
			{
				/*p = malloc(strlen(va_arg(ap, char*)));*/
				p = va_arg(ap, char*);
				len_format += print_string(p);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
		}

		len_format++;
	}

	va_end (ap);
	return (len_format);
}
