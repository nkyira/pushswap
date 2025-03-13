/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                  :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <jodavis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 05:01:36 by jodavis           #+#    #+#             */
/*   Updated: 2025/03/13 09:23:14 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *, long int))
{
	while (lst)
	{
		f(lst->content, lst->num);
		lst = lst->next;
	}
}
