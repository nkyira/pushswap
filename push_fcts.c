/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   push_fcts.c                                        :+:      :+:    :+:   */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/05 11:58:21 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/19 02:53:01 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_b(t_data *data)
{
	t_list	*temp;

	if (!data->front_a)
		return (0);
	temp = data->front_a->next;
	ft_lstadd_front(&data->front_b, data->front_a);
	data->front_a = temp;
	ft_printf("pb\n");
	return (1);
}

int	push_a(t_data *data)
{
	t_list	*temp;

	if (!data->front_b)
		return (0);
	temp = data->front_b->next;
	ft_lstadd_front(&data->front_a, data->front_b);
	data->front_b = temp;
	ft_printf("pa\n");
	return (1);
}

void	push_nb(t_data *data, int n)
{
	while (n--)
		push_b(data);
}

void	push_na(t_data *data, int n)
{
	while (n--)
		push_a(data);
}
