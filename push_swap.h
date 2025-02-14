/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   push_swap.h                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/04 14:20:07 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/14 19:06:21 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_data
{
	int		arg_num;
	t_list	*front_a;
	t_list	*front_b;
	char	**str_tab;
	int		*int_tab;
	int		did_split;
}	t_data;
void	print_stacks(t_data *data);
int		push_b(t_data *data);
int		push_a(t_data *data);
void	push_nb(t_data *data, int n);
void	push_na(t_data *data, int n);
int		swap(t_list **front_a, t_list **front_b);
int		rotate(t_list **front_a, t_list **front_b);
int		rrotate(t_list **front_a, t_list **front_b);
int		error_check(char **str_tab);
int		tab_len(char **str_tab);
void	atoi_tab(t_data *data);
int		merge_stacks(t_data data);
int		interror_check(t_data *data);
void	clear_lst(t_list *lst);
void	stack_merge(t_data *data);
int		*merge_split(int *frst_tab, int size);
void	print_tab(int *int_tab, int len);
int		find_size(int arg_num);
void	merge_four(t_data *data);

#endif
