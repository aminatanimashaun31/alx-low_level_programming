#include "main.h"

/**
 * _puts: - prints a string, followed by a
 * new line, to stdout
 * @str: string
 * Return: Return the number of char
 * _puts: - A function that prints a string, followed
 * by a new line, to stdout
 * @str: an input string
 * Return: Nothing
*/

void _puts(char *str)
{
int i = 0;
while (str[i])
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
