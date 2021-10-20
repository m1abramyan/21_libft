/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggranule <ggranule@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:22:23 by ggranule          #+#    #+#             */
/*   Updated: 2021/10/16 15:36:39 by ggranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischar(char a, char c)
{
	if (a == c)
		return (1);
	return (0);
}

static int	count_words(char const *str, char c)
{
	int	i;
	int	in_w;
	int	n_w;

	i = 0;
	in_w = 0;
	n_w = 0;
	while (str[i])
	{
		if (!in_w && !ft_ischar(str[i], c))
		{
			n_w += 1;
			in_w = 1;
		}
		else if (in_w && ft_ischar(str[i], c))
			in_w = 0;
		i++;
	}
	return (n_w);
}

static char	*ft_h(char *str, const char *s, int len, int start)
{
	str = (char *)malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}

static void	words_make(char const *s, char **strs, char c, int in_w)
{
	int		i;
	int		n_w;
	int		start;

	i = -1;
	n_w = 0;
	while (s[++i])
	{
		if (!in_w && !ft_ischar(s[i], c))
		{
			start = i;
			n_w += 1;
			in_w = 1;
		}
		if (in_w && ft_ischar(s[i], c))
		{
			in_w = 0;
			strs[n_w - 1] = ft_h(strs[n_w - 1],
					s, i - start + 1, start);
		}
	}
	if (in_w)
		strs[n_w - 1] = ft_h(strs[n_w - 1], s, i - start + 1, start);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	strs = (char **)malloc (sizeof(char *) * (words + 1));
	if (!strs)
		return (NULL);
	words_make(s, strs, c, 0);
	strs[words] = NULL;
	return (strs);
}
