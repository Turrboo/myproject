#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			// Print the first number
			write(1, &"0123456789"[a / 10], 1);
			write(1, &"0123456789"[a % 10], 1);
			write(1, " ", 1);
			// Print the second number
			write(1, &"0123456789"[b / 10], 1);
			write(1, &"0123456789"[b % 10], 1);
			// Add a comma and space unless it's the last combination
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
