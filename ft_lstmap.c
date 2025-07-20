/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 10:00:37 by abdualsh          #+#    #+#             */
/*   Updated: 2025/07/20 10:01:06 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstmapclear(t_list *result, void (*del)(void *), void *temp)
{
	ft_lstclear(&result, del);
	del(temp);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;
	void	*temp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	result = NULL;
	while (lst != NULL)
	{
		temp = f(lst->content);
		if (temp == NULL)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		new = ft_lstnew(temp);
		if (new == NULL)
		{
			ft_lstmapclear(result, del, temp);
			return (NULL);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}
