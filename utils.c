/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   utils.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/05 11:38:51 by jodavis        #+#    #+#                */
/*   Updated: 2025/03/13 11:48:30 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void	atoi_tab(t_data *data)
{
	int	i;

	i = 0;
	while (data->str_tab[i])
	{
		data->int_tab[i] = ft_atoi(data->str_tab[i]);
		i++;
	}
}

int	tab_len(char **str_tab)
{
	int	len;

	len = 0;
	while (str_tab[len])
		len++;
	return (len);
}

void	print_node(void *s, long int num)
{
	printf("(%ld)%d ", num, *(int *)s);
}

void	print_stacks(t_data *data)
{
	printf("-----------------------------------\nA : ");
	ft_lstiter(data->front_a, print_node);
	printf("\nB : ");
	ft_lstiter(data->front_b, print_node);
	printf("\n");
}

void	clear_lst(t_list *lst)
{
	t_list	*temp;

	while (lst)
	{
		temp = (lst)->next;
		free(lst);
		lst = temp;
	}
}
