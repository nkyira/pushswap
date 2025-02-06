/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   error_check.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/06 15:01:12 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/06 15:51:49 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int is_all_digit(char **str_tab)
{
	char *str_start;

	while (*str_tab)
	{
		str_start = *str_tab;
		while(**str_tab)
		{
			if (**str_tab == '-')
				(*str_tab)++;
			if (!ft_isdigit(**str_tab))
				return (0);
			(*str_tab)++;
		}
		*str_tab = str_start;
		str_tab++;
	}
	return (1);
}

int	error_check(char **str_tab)
{
	if (!is_all_digit(str_tab))
		return (0);
	return (1);
}
