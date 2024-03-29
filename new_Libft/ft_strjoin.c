/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:42:02 by stelie            #+#    #+#             */
/*   Updated: 2021/11/23 15:01:53 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;
	int		i;

	if (!s1 && !s2)
		return (ft_strdup(""));
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	len = (ft_strlen(s1) + ft_strlen(s2));
	join = malloc(sizeof(char) * (len + 1));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		join[i++] = *(s1++);
	while (*s2)
		join[i++] = *(s2++);
	join[i] = '\0';
	return (join);
}
