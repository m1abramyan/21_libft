/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranule <ggranule@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:41:58 by ggranule          #+#    #+#             */
/*   Updated: 2021/10/10 16:15:54 by ggranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*str;
	void				*res;

	str = (const unsigned char *)s;
	c = (unsigned char)c;
	while (*str != '\0')
	{
		if (*str == c)
		{
			res = (void *)(str);
			return (res);
		}
		str++;
	}
	if (c == '\0' && *str == '\0')
	{
		res = (void *)(str);
		return (res);
	}
	return (0);
}
