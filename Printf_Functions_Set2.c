#include "main.h"
/**
 * If_Integer - Prints Provided Int To STD_OUT
 * @Number: Integer To Printed
 *
 * Return: Number Of Printed Characters
*/
Size_t If_Integer(int Number)
{
	int Reversed_Int = 1, Printed_Char = 0;

	if (Number < 0)
	{
		Char('-');
		Number *= -1;
		Printed_Char++;
	}
	do {
		Reversed_Int = (Reversed_Int * 10) + (Number % 10);
		Number /= 10;
	} while (Number != 0);
	do {
		Char((Reversed_Int % 10) + 48);
		Printed_Char++;
		Reversed_Int /= 10;
	} while (Reversed_Int != 1);
	return (Printed_Char - 1);
}
