/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rotate_fcts.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/05 13:21:07 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/05 17:39:04 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack(t_list **front_s)
{
	t_list *temp;

	if (!*front_s || !(*front_s)->next)
		return ;
	temp = (*front_s)->next;
	ft_lstadd_back(front_s, *front_s);
	(*front_s)->next = NULL;
	*front_s = temp;
}

int	rotate(t_list **front_a, t_list **front_b)
{
	int	a_ok;
	int	b_ok;

	a_ok = (*front_a && (*front_a)->next);
	b_ok = (*front_b && (*front_b)->next);
	rotate_stack(front_a);
	rotate_stack(front_b);
	if (a_ok && b_ok)
		ft_printf("rr\n");
	else if (a_ok)
		ft_printf("ra\n");
	else if (b_ok)
		ft_printf("rb\n");
	else
		return (0);
	return (1);
}

void	rrotate_stack(t_list **front_s)
{
	t_list *temp;

	if (!*front_s || !(*front_s)->next)
		return ;
	temp = ft_lstlast(*front_s);
	temp->next = *front_s;
	*front_s = temp;
	temp = ft_lstprevious(temp->next, temp);
	temp-> next = NULL;
}

int	rrotate(t_list **front_a, t_list **front_b)
{
	int	a_ok;
	int	b_ok;

	a_ok = (*front_a && (*front_a)->next);
	b_ok = (*front_b && (*front_b)->next);
	rrotate_stack(front_a);
	rrotate_stack(front_b);
	if (a_ok && b_ok)
		ft_printf("rrr\n");
	else if (a_ok)
		ft_printf("rra\n");
	else if (b_ok)
		ft_printf("rrb\n");
	else
		return (0);
	return (1);
}
