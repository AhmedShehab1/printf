#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Prints Provided String To StdOut
 * @format: String To Be Printed
 *
 * Return: No. Of Characters Printed To StdOut
*/
int _printf(const char *format, ...)
{
	va_list Ptr;
	void *ptr;
	Size_t Char_Printed = 0;

	va_start(Ptr, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(++format))
			{
			case 'c':
			Char(va_arg(Ptr, int));
				break;
			case 's':
			ptr = va_arg(Ptr, char *);
			Char_Printed += If_String(ptr);
				break;
			case '%':
			Char('%');
				break;
			default:
			Char('%');
			Char(*format);
			Char_Printed++;
				break;
			}
		}
		else
		{
			write(STD_OUT, format, 1);
		}
		format++;
		Char_Printed++;
	}
	va_end(Ptr);
	return (Char_Printed);
}
