/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranule <ggranule@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:37:52 by ggranule          #+#    #+#             */
/*   Updated: 2021/10/11 01:03:52 by ggranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	*str;
	size_t				slen;
	void				*res;

	str = (const unsigned char *)s;
	slen = ft_strlen(s) + 1;
	c = (unsigned char)c;
	while (slen--)
	{
		if (str[slen] == c)
		{
			res = (void *)(str + slen);
			return (res);
		}
	}
	return (0);
}
