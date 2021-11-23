/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 11:06:51 by stelie            #+#    #+#             */
/*   Updated: 2021/11/23 11:38:53 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	is_in_charset(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (TRUE);
		set++;
	}
	return (FALSE);
}

static unsigned int	end_checker(char const *s1, char const *set)
{
	unsigned int	len;

	len = ft_strlen(s1);
	while (is_in_charset(set, s1[len - 1]))
		len--;
	return (len);
}

static char	*fill_trim(char const *s1, char const *set, unsigned int i)
{
	unsigned int	len;
	unsigned int	j;
	char			*trim;

	len = end_checker(s1, set);
	trim = malloc(sizeof(char) * ((len - i) + 1));
	if (trim == NULL)
		return (NULL);
	j = 0;
	while (i < len)
		trim[j++] = s1[i++];
	trim[j] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;

	i = 0;
	if (!s1)
		return (ft_strdup(""));
	else if (!set)
		return (ft_strdup(s1));
	else
	{
		while (is_in_charset(set, s1[i]))
			i++;
		if (!s1[i])
			return (ft_strdup(""));
	}
	return (fill_trim(s1, set, i));
}
