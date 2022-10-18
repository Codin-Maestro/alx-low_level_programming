#include <stdio.h>



/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
{
		printf("%c", a);
}
	printf("\n");
}
