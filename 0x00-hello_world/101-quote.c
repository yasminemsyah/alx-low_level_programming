#include <stdio.h>
/**
 * main - Print String using fprintf
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str[80] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n",  str);
	return (1);
}
