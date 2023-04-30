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
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
		putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
