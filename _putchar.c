#include <unistd.h>
#include "main.h"
/**
  *_putchar- prints a character
  *@c: character to be printed
  *Return: 1 on success
  *on error returns -1 and errno is set appropriately
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
