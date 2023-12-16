#include <stdio.h>

/**
 * _puts - Prints a string to stdout
 * @str: The string to be printed
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
        printf("%s\n", str);
}
int main(void)
{
        _puts("\"Programming is like building a multilingual puzzle");

        return (0);
}
