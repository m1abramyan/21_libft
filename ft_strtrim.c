/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranule <ggranule@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:20:06 by ggranule          #+#    #+#             */
/*   Updated: 2021/10/16 15:22:01 by ggranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_issymbol(const char *set, char c)
{
	int	index;

	index = 0;
	while (set[index] && set[index] != c)
		index++;
	return (set[index] == c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		index;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	index = 0;
	while (s1[index] && ft_issymbol(set, s1[index]))
		s1++;
	index = ft_strlen(s1);
	while (index && ft_issymbol(set, s1[index - 1]))
		index--;
	str = (char *)malloc (sizeof(char) * (index + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, index + 1);
	return (str);
}
