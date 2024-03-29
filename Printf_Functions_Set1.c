#include "main.h"
/**
 * Char - Assign A pointer To Char To Be Printed
 * @c: Char To Printed
 *
 * Return: Pointer To Character
*/
void Char(char c)
{
	write(STD_OUT, &c, 1);
}
/**
 * String_Size - Gets Size Of Provided String
 * @string: String To Get Its Size
 *
 * Return: Size Of String
*/
Size_t String_Size(char *string)
{
	Size_t i = 0;

	while (string[i] != 0)
	{
		i++;
	}
	return (i);
}
/**
 * PrintString - Prints Provided String To STDOUT
 * @s: String To Be Printed
 *
 * Return: Size Of String
*/
Size_t PrintString(char *s)
{
	Size_t SizeOfString;

	if (s == NULL)
	{
		s = "(null)";
	}
	SizeOfString = String_Size(s);
	SizeOfString = write(STD_OUT, s, SizeOfString);
	return (SizeOfString - 1);
}
