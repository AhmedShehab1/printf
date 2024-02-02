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
			Char_Printed += PrintString(va_arg(Ptr, char *));
				break;
			case '%':
			Char('%');
				break;
			case 'i':
Integer:
			Char_Printed += If_Integer(va_arg(Ptr, int));
				break;
			case 'd':
			goto Integer;
			default:
			Char('%');
			Char(*format);
			Char_Printed++;
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
