/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:49:02 by stelie            #+#    #+#             */
/*   Updated: 2019/11/10 15:43:05 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack[0] && !needle[0])
		return (&((char *)haystack)[0]);
	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && needle[j] && (i + j < len))
			j++;
		if (!needle[j])
			return (&((char *)haystack)[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
