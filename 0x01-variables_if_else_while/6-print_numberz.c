#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  the alphabet in lowercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
