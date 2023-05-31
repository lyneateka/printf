#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/**
  *_printf - prints anything
  *@format: string to be printed
  *Return: 0 (success)
  */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list rl;

	va_start(rl, format);
	if (format == NULL)
		return (-1);
	if (format[i] == '%')
		i++;
	switch (format[i])
	{
		case 'c':
			_putchar(va_arg(rl, int));
			break;
		case 's':
			_putchar(va_arg(rl, int));
			break;
		default:
			write(1, format, (sizeof(char) * strlen(format)));
			break;
	}
	return (0);
}
