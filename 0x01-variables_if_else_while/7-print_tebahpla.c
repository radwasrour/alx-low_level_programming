#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: the alphabet in lowercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
