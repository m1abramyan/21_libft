/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranule <ggranule@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:09:48 by ggranule          #+#    #+#             */
/*   Updated: 2021/10/16 14:54:20 by ggranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;

	if (!*needle)
		return ((char *) haystack);
	index = 0;
	while (needle[index] && index < len && haystack[index])
	{
		if (haystack[index] != needle[index])
		{
			haystack++;
			index = -1;
			len--;
		}
		index++;
	}
	if (!needle[index])
		return ((char *)haystack);
	return (NULL);
}
