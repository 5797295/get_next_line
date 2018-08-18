#include <stdio.h>

void	ft1(void)
{
	int i = 0;
	i++;
	printf("i = %d\n\n", i);
}

void	ft2(void)
{
	static int i;
	i++;
	printf("static i = %d\n\n", i);
}

int		main(void)
{
	ft1();
	ft1();
	ft2();
	ft2();
	return (0);
}
