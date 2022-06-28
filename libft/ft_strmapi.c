#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*out;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	out = (char *)malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	while (i < len)
	{
		out[i] = f(i, (char)s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
