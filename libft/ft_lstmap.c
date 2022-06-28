#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*out;
	t_list	*current;

	out = NULL;
	while (lst)
	{
		current = ft_lstnew(f(lst->content));
		if (!current)
		{
			ft_lstclear(&current, del);
			return (NULL);
		}
		ft_lstadd_back(&out, current);
		lst = lst->next;
	}
	return (out);
}
