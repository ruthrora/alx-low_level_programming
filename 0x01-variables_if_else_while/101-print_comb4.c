#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '10'; a++)
	{
		for (b = '0'; b <= '10'; b++)
		{
			for (c = '0'; c <= '10'; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}

				}

			}

		}

	}
	putchar('\n');
	return (0);
}


