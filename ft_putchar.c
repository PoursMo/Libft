#include "libft.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
