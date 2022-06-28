#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*mem;

	i = 0;
	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	while (i < count * size)
	{
		((unsigned char *) mem)[i] = '\0';
		i++;
	}
	return (mem);
}
