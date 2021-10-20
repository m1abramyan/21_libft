/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranule <ggranule@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:29:18 by ggranule          #+#    #+#             */
/*   Updated: 2021/10/16 15:39:47 by ggranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ft_dst;
	const char	*ft_src;

	if (!dst && !src)
		return (NULL);
	ft_dst = (char *)dst;
	ft_src = (const char *)src;
	while (n-- > 0)
		*ft_dst++ = *ft_src++;
	return (dst);
}
