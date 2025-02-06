/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   push_fcts.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/05 11:58:21 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/06 13:25:55 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_b(t_list **front_a, t_list **front_b)
{
	t_list	*temp;

	if (!*front_a)
		return (0);
	temp = (*front_a)->next;
	ft_lstadd_front(front_b, *front_a);
	*front_a = temp;
	ft_printf("pb\n");
	return (1);
}

int	push_a(t_list **front_a, t_list **front_b)
{
	t_list	*temp;

	if (!*front_b)
		return (0);
	temp = (*front_b)->next;
	ft_lstadd_front(front_a, *front_b);
	*front_b = temp;
	ft_printf("pa\n");
	return (1);
}
