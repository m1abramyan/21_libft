/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranule <ggranule@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:57:55 by ggranule          #+#    #+#             */
/*   Updated: 2021/10/17 13:41:28 by ggranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ft_ret;
	t_list	*count;

	ft_ret = NULL;
	while (lst)
	{
		count = ft_lstnew(f(lst->content));
		if (!count)
		{
			ft_lstclear(&ft_ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ft_ret, count);
		lst = lst->next;
	}
	return (ft_ret);
}
