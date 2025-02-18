/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   merge_split.c                                      :+:      :+:    :+:   */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/14 15:49:03 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/18 08:13:31 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*merge_split(int *frst_tab, int size)
{
	int	i;
	int	*new_tab;

	new_tab = malloc(sizeof(int) * size * 2);
	i = 0;
	ft_printf("array size = %d\n", size * 2);
	while (i < size)
	{
		ft_printf("(dividing %d) ", frst_tab[i]);
		new_tab[2 * i] = frst_tab[i] - frst_tab[i] / 2;
		new_tab[2 * i + 1] = frst_tab[i] / 2;
		i++;
	}
	size *= 2;
	free(frst_tab);
	ft_printf("*new_tab = %d\n", *new_tab);
	if (*new_tab > 5)
		new_tab = merge_split(new_tab, size);
	return (new_tab);
}

void	print_tab(int *int_tab, int len)
{
	int	i;

	i = -1;
	ft_printf("[");
	while (++i < len)
	{
		ft_printf("%d", int_tab[i]);
		if (i + 1 != len)
			ft_printf(", ");
	}
	ft_printf("]\n");
}

int	find_size(int arg_num, int frst_num)
{
	int	size;

	if (arg_num <= 4)
		return (2);
	size = 2;
	while (size < arg_num)
	{
		size *= 2;
	}
	size /= 4;
	if (frst_num == 5)
		size /= 2;
	return (size);
}

/*int	main()
{
	int *int_tab;
	int *enter;
	int size;
	
	enter = malloc(sizeof(int));
	*enter = 1000;
	size = find_size(*enter);
	int_tab = merge_split(enter, 1);
	print_tab(int_tab, size);
	free(int_tab);
}*/
