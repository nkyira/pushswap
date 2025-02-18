/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_fcts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 02:21:45 by jodavis           #+#    #+#             */
/*   Updated: 2025/02/18 02:25:09 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_stack(t_list **front_s)
{
	t_list	*temp;

	if (!front_s)
		return ;
	if (!*front_s || !(*front_s)->next)
		return ;
	temp = ft_lstlast(*front_s);
	temp->next = *front_s;
	*front_s = temp;
	temp = ft_lstprevious(temp->next, temp);
	temp->next = NULL;
}

void	rrotate_a(t_data *data)
{
	rrotate_stack(&data->front_a);
	ft_printf("rra\n");
}

void	rrotate_b(t_data *data)
{
	rrotate_stack(&data->front_b);
	ft_printf("rrb\n");
}

void	rrotate_na(t_data *data, int n)
{
	while(n--)
		rrotate_a(data);
}

void	rrotate_nb(t_data *data, int n)
{
	while(n--)
		rrotate_b(data);
}
