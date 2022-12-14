#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>


int _putchar(char c);
/**
 * _putchar - prints the given char
 * @c: the char to be printed
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


int _isupper(int c);
/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */


int _isdigit(int c);
/**
 * isdigit - checkes for digit 0 through 9
 * @c: the char to be checked
 * Return: 1 if c is digit, otherwise 0
 */


int mul(int a, int b);
/**
 * mul - multipies two integers
 * @a: number1
 * @b: number2
 * Return: The multiplication result of the numbers
 */


void print_numbers(void);
/**
 * print_numbers - prints integer from 0 to 9
 */


void print_most_numbers(void);
/**
 * print_most_numbers - print from 0 to 9 except 2 and 4
 */


void more_numbers(void);
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */


void print_line(int n);
/**
 * print_line - draws a line
 * @n: The length of the line
 */


void print_diagonal(int n);
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The length of the line
 */


void print_square(int size);
/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 */


void print_triangle(int size);
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size:  is the size of the triangle
 */

void print_number(int n);

#endif
