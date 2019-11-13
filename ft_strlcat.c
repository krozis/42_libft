/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:41:57 by stelie            #+#    #+#             */
/*   Updated: 2019/11/10 18:53:26 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendest;

	i = 0;
	lendest = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	if (lendest > dstsize - 1)
		return (dstsize + ft_strlen(src));
	while (src[i] && i + lendest < dstsize - 1)
	{
		dst[i + lendest] = src[i];
		i++;
	}
	dst[i + lendest] = '\0';
	return (ft_strlen(src) + lendest);
}
