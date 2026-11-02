#include <stdio.h>

int main(void)
{
	int f = 0x30;
	int s = 0x31;

	while (f < 0x39)
	{
		s = f + 1;
		while (s <= 0x39)
		{
			putchar(f);
			putchar(s);
			if (f < 0x38)
			{
				putchar(',');
				putchar(' ');
			}
			s++;
		}
		f++;
	}
	return (0);
}

