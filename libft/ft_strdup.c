#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*out;

	i = 0;
	if (s1[0] != '\0')
		out = malloc((ft_strlen(s1) + 1) * sizeof(char));
	else
		out = malloc(sizeof(char));
	if (out == NULL)
		return (NULL);
	while (s1[i])
	{
		out[i] = s1[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
