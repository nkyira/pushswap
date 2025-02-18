/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/04 14:20:07 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/18 08:12:46 by jodavis          ###   ########.fr       */
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
	int		*merge_sizes;
}	t_data;
//push_swap operations
int		push_b(t_data *data);
int		push_a(t_data *data);
void	push_nb(t_data *data, int n);
void	push_na(t_data *data, int n);
void	swap_a(t_data *data);
void	swap_b(t_data *data);
void	swap_s(t_data *data);
void	rotate_a(t_data *data);
void	rotate_b(t_data *data);
void	rotate_na(t_data *data, int n);
void	rotate_nb(t_data *data, int n);
void	rrotate_a(t_data *data);
void	rrotate_b(t_data *data);
void	rrotate_na(t_data *data, int n);
void	rrotate_nb(t_data *data, int n);
//utilities
void	print_stacks(t_data *data);
void	print_tab(int *int_tab, int len);
int		find_size(int arg_num, int frst_num);
int		tab_len(char **str_tab);
void	clear_lst(t_list *lst);
//parsing
int		error_check(char **str_tab);
void	atoi_tab(t_data *data);
int		interror_check(t_data *data);
//merge functions
int		fbn(t_list *list);
int		abb(t_data *data);
int		*merge_split(int *frst_tab, int size);
void	sort_three(t_data *data);
void	merge_four(t_data *data);
void	merge_five(t_data *data);
void	merging_xy(t_data *data, int x, int y);

#endif
