#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)

	{
		putchar(48 + a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
																		}
		a++;
	}
	putchar('\n');
	return (0);
}
