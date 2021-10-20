/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranule <ggranule@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:09:59 by ggranule          #+#    #+#             */
/*   Updated: 2021/10/16 15:39:57 by ggranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*ft_dst;
	unsigned const char	*ft_src = src;
	size_t				i;

	ft_dst = dst;
	if (ft_dst > ft_src)
	{
		i = 1;
		while (i <= n)
		{
			ft_dst[n - i] = ft_src[n - i];
			i++;
		}
	}
	else if (dst || src)
	{
		i = 0;
		while (i < n)
		{
			ft_dst[i] = ft_src[i];
			i++;
		}
	}
	return (dst);
}
