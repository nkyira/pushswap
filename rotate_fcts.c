/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rotate_fcts.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/05 13:21:07 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/05 15:11:11 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_a(t_list **front_a)
{
	t_list *temp;

	if (!*front_a)
		return (0);
	temp = (*front_a)->next;
	ft_lstadd_back(front_a, *front_a);
	(*front_a)->next = NULL;
	*front_a = temp;
	ft_printf("ra\n");
	return (1);
}
