#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 *_printf - entry point of the function
 */

int _printf(const char *format, ...)
{
	int len_format, i;
	va_list ap;
	va_start (ap, format);

	for (i = 0; format[i] != '\0';i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
			}
			else if (format[i + 1] == 'c')
			{
				_putchar(va_arg(ap, int));
				i++;
			}
			else if (format[i + 1] == 's');
			{
				print_string(va_arg(ap, char *));
			}
		else
		{
			_putchar(format[i]);
		}
		len_format++;
	}

	va_end(ap);
	return (len_format);
}
