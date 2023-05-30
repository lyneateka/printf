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
	char i = 0;
	va_list rl;

	va_start(rl, format);
	if (format == NULL)
		return (-1);
	while (format)
	{
		if (format[i] == '%')
			i++;
		if (format[i] == 'c')
			strcpy(c, va_arg(rl, char));
		if (format[i] == 's')
			strpy(s, va_arg(rl, *char));
		va_end(rl);
		write(1, format, (sizeof(char) * strlen(format)));
	}
	return (0);
}
