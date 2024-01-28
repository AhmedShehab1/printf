#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Prints Provided String To StdOut 
 * @format: String To Be Printed
*/
int _printf(const char *format, ...)
{
	va_list Ptr, Copy_ptr;
	void *ptr;
	Size_t SizeOfString, Char_Printed = 0;
	va_start(Ptr, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(++format))
			{
			case 'c':
			ptr = Char(va_arg(Ptr, int));
			write (1, ptr, 1);
				break;
			case 's':
			va_copy(Copy_ptr, Ptr);
			SizeOfString = String_Size(va_arg(Copy_ptr, char *));
			Char_Printed += (SizeOfString - 2);
			write (1, va_arg(Ptr, char *), SizeOfString);
				break;
			case '%':
			ptr = Char('%');;
			write (1, ptr, 1);
				break;
			default:
				break;
			}
		}
		else
		{
			write (1, format, 1);
		}
		format++;
		Char_Printed++;
	}
	va_end(Ptr);
	return (Char_Printed);
}