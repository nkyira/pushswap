/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   print_fcts.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/05 11:38:51 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/06 13:33:04 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_str(void *s)
{
	ft_printf("%s ", s);
}

void	print_stacks(t_list *front_a, t_list *front_b)
{
	ft_printf("-----------------------------------\nA : ");
	ft_lstiter(front_a, print_str);
	ft_printf("\nB : ");
	ft_lstiter(front_b, print_str);
	ft_printf("\n");
}
