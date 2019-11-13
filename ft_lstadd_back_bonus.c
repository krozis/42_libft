/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:36:01 by stelie            #+#    #+#             */
/*   Updated: 2019/11/10 15:43:05 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*start;

	new->next = NULL;
	if (*alst == NULL)
		*alst = new;
	else
	{
		start = *alst;
		while (start->next)
			start = start->next;
		start->next = new;
	}
}
