/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranule <ggranule@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:37:21 by ggranule          #+#    #+#             */
/*   Updated: 2021/10/10 12:33:35 by ggranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*ft_dst;
	const char	*ft_src;
	size_t		dstlen;
	size_t		ft_dstsize;

	ft_dst = (char *)dst;
	ft_src = (const char *)src;
	ft_dstsize = dstsize;
	while (ft_dstsize-- != 0 && *ft_dst != '\0')
		ft_dst++;
	dstlen = ft_dst - dst;
	ft_dstsize = dstsize - dstlen;
	if (ft_dstsize == 0)
		return (dstlen + ft_strlen(ft_src));
	while (*ft_src != '\0')
	{
		if (ft_dstsize != 1)
		{
			*ft_dst++ = *ft_src;
			ft_dstsize--;
		}
		ft_src++;
	}
	*ft_dst = '\0';
	return (dstlen + (ft_src - src));
}
