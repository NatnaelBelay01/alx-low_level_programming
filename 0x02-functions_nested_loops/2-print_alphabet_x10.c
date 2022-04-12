/**
 * main - the main function
 * Return: returns 0
 */
void print_alphabet_x10(void);
int main(void)
{
	return (0);
}
void print_alphabet_x10(void);
{
	int m = 0;
	char n = 'a';

	for (m; m < 10; m++)
	{
		for (n; n <= 'z'; n++)
		{
			putchar(n);
		}
		n = 'a';
		putchar('\n');
	}
}
