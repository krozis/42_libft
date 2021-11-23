/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:49:02 by stelie            #+#    #+#             */
/*   Updated: 2021/11/23 11:30:27 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (!s1[0] && !s2[0])
		return (&((char *)s1)[0]);
	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s1[i + j] == s2[j] && s2[j] && (i + j < len))
			j++;
		if (!s2[j])
			return (&((char *)s1)[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
