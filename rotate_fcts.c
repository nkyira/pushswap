/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rotate_fcts.c                                      :+:      :+:    :+:   */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/05 13:21:07 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/19 01:00:47 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack(t_list **front_s)
{
	t_list	*temp;

	if (!front_s)
		return ;
	if (!*front_s || !(*front_s)->next)
		return ;
	temp = (*front_s)->next;
	ft_lstadd_back(front_s, *front_s);
	(*front_s)->next = NULL;
	*front_s = temp;
}

void	rotate_a(t_data *data)
{
	rotate_stack(&data->front_a);
	ft_printf("ra\n");
}

void	rotate_b(t_data *data)
{
	rotate_stack(&data->front_b);
	ft_printf("rb\n");
}

void	rotate_na(t_data *data, int n)
{
	while (n--)
		rotate_a(data);
}

void	rotate_nb(t_data *data, int n)
{
	while (n--)
		rotate_b(data);
}
