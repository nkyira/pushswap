/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   merge_fcts.c                                       :+:      :+:    :+:   */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/09 18:26:48 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/18 07:56:54 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fbn(t_list *lst)
{
	return (*(int *)(lst->content) > *(int *)(lst->next->content));
}

int	abb(t_data *data)
{
	t_list	*a;
	t_list	*b;

	a = data->front_a;
	b = data->front_b;
	return (*(int *)(a->content) > *(int *)(b->content));
}

void	merge_four(t_data *data)
{
	push_nb(data, 2);
	if (fbn(data->front_a) & !fbn(data->front_b))
		swap_s(data);
	else if (fbn(data->front_a))
		swap_a(data);
	else if (!fbn(data->front_b))
		swap_b(data);
	if (abb(data))
	{
		push_nb(data, 2);
		return ;
	}
	merging_xy(data, 2, 1);
}

void sort_three(t_data *data)
{
	push_b(data);
	if (fbn(data->front_a))
		swap_a(data);
	push_b(data);
	if (!fbn(data->front_b))
		swap_b(data);
	push_b(data);
	if (!fbn(data->front_b))
		swap_b(data);
}

void merge_five(t_data *data)
{
	sort_three(data);
	if (fbn(data->front_a))
		swap_a(data);
	if (abb(data))
	{
		push_nb(data, 2);
		return ;
	}
	merging_xy(data, 2, 2);
}
