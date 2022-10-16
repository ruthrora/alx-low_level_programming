#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 28; x < 38; x++)
	{
		for (y = 29; y < 38; y++)
		{
			for (z = 30; z < 38; z++)
			{
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 35 || y != 36)
					{
						putchar(',');
						putchar(' ');
					}

				}

			}

		}

	}
	putchaar('\n');
	return (0);
}
