#include <stdio.h>
/**
 * _islower - Checks for lowercase character
*
* @c: the character to check
*
* Return: 1 if c is lowercase. Otherwise return 0
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
