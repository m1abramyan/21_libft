/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranule <ggranule@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:18:24 by ggranule          #+#    #+#             */
/*   Updated: 2021/10/16 15:19:14 by ggranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;

	if (!s1 || !s2)
		return (NULL);
	sjoin = (char *)malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!sjoin)
		return (NULL);
	ft_strlcpy(sjoin, s1, ft_strlen(s1) + 1);
	ft_strlcat(sjoin, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (sjoin);
}
