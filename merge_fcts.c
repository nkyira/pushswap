/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   merge_fcts.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/09 18:26:48 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/14 20:55:20 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int fBn(t_list *lst)
{
	if(*(int *)(lst->content) > *(int *)(lst->next->content))
		return (1);
	return (0);
}

void merge_four(t_data *data)
{ 
	int sa;
	int sb;
	t_list **a;
	t_list **b;
	int i = 2;

	push_nb(data, 2);
	print_stacks(data);
	a = &data->front_a;
	b = &data->front_b;
	sa = *(int *)((*a)->content) > *(int *)((*a)->next->content);
	sb = *(int *)((*b)->content) < *(int *)((*b)->next->content);
	if (sa & sb)
		swap(a, b);
	else if (sa)
		swap(a, NULL);
	else if (sb)
		swap(NULL, b);
	print_stacks(data);
	if (*(int *)((*a)->content) > *(int *)((*b)->content))
	{
		push_nb(data, 2);
		print_stacks(data);
		return ;
	}
	rotate(NULL, b);
	while (i--)
	{
		if (*(int *)((*a)->content) < *(int *)((*b)->content))
		{
			push_b(data);
			swap(NULL, b);
			print_stacks(data);
		}
		else
		{
			rrotate(NULL, b);
			if (*(int *)((*a)->content) > *(int *)((*b)->content))
				push_b(data);
			else
				i++;
		}
	}
	print_stacks(data);
	return ;
}

void merge_three()
{
	
}

void merge_two()
{

}

void merge_xy()
{

}
