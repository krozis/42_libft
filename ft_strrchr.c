/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:04:27 by stelie            #+#    #+#             */
/*   Updated: 2019/11/10 19:29:16 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*sub_strrchr(const char *s, int c, size_t i, t_bool t)
{
	char	*str;

	str = NULL;
	if (t)
	{
		while (s[i])
		{
			if (s[i] == (char)c)
				str = ((char *)s) + i;
			i++;
		}
	}
	else
	{
		while (s[i - 1])
		{
			if (s[i] == (char)c)
				str = ((char *)s) + i;
			i--;
		}
	}
	return (str);
}

char		*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	if (s[0] == '\0' && c == 0)
		return ((char *)s);
	if (c == 0 && s[0])
		return (&((char *)s)[ft_strlen(s)]);
	if (c == 0)
		return (sub_strrchr(s, c, ft_strlen(s), FALSE));
	else
		return (sub_strrchr(s, c, 0, TRUE));
}
