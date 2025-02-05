/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   push_swap.h                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/04 14:20:07 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/05 17:39:52 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

void 	print_str(void *s);
void 	print_stacks(t_list *front_a, t_list *front_b);
int 	push_b(t_list **front_a, t_list **front_b);
int 	push_a(t_list **front_b, t_list**front_a);
int 	swap(t_list **front_a, t_list **front_b);
int	rotate(t_list **front_a, t_list **front_b);
int	rrotate(t_list **front_a, t_list **front_b);

#endif
