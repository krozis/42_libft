/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:41:57 by stelie            #+#    #+#             */
/*   Updated: 2021/11/23 11:21:09 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendest;

	i = 0;
	lendest = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (lendest > size - 1)
		return (size + ft_strlen(src));
	while (src[i] && i + lendest < size - 1)
	{
		dst[i + lendest] = src[i];
		i++;
	}
	dst[i + lendest] = '\0';
	return (ft_strlen(src) + lendest);
}
