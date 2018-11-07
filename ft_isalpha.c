//#include "libft.h"

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	isalpha(int c)
{
	if (ft_isupper == 1 || ft_islower == 1)
		return (1);
	else
		return (0);
}
	
