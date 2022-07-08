#include <stdio.h>

int pal(int n)
{
	int i = 0, j, k = n;

	while (n > 0)
	{
		j = n % 10;
		n = n / 10;
		i = i + j;
		i = 10 * i;
	}
	if (i == k)
		return 1;
	return (0);
}
int main(void)
{
	int i, j, l;
	for (i = 100; i <= 999; i++)
	{
		for (j = 100; j <= 999; j++)
		{
			if ( pal(j * i) && (i * j) > l)
				l = j * i;
		}
	}
	printf("%d\n", l);
	return (0);
}
