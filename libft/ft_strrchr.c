#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ptr;
	unsigned char	*str;
	int				i;

	ptr = NULL;
	str = (unsigned char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			ptr = str + i;
		i++;
	}
	if (!(unsigned char)c)
		return ((char *)str + i);
	return ((char *)ptr);
}
