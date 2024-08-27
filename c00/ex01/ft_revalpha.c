#include <unistd.h>
void ft_printrevalpha(void)
{
	char	 c;

	c = 'z';
	while (c  >= 'a')
	{
		write (1, &c, 1);
		 c--;
	}
    write(1, "\n", 1);
}
int	main()
{
	ft_printrevalpha();
	return (0);
}