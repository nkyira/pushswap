/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/06 15:01:12 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/19 07:53:32 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_to_big(char *str_tab)
{
	int	minus;

	if (*str_tab == '-')
	{
		str_tab++;
		minus = 1;
	}
	else
		minus = 0;
	while (ft_strlen(str_tab) > 1 && *str_tab == '0')
		str_tab++;
	if (ft_strlen(str_tab) < 10)
		return (0);
	else if (minus && ft_strncmp(str_tab, "2147483648", 10) > 0)
	{
		ft_printf("int min check fail\n");
		return (1);
	}
	else if (!minus && ft_strncmp(str_tab, "2147483647", 10) > 0)
	{
		ft_printf("int max check fail\n");
		return (1);
	}
	return (0);
}

int	is_all_digit(char **str_tab)
{
	char	*str_start;

	while (*str_tab)
	{
		str_start = *str_tab;
		if (**str_tab == '-')
			(*str_tab)++;
		while (**str_tab)
		{
			if (!ft_isdigit(**str_tab))
			{
				ft_printf("digit check fail\n");
				*str_tab = str_start;
				return (0);
			}
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
	while (*str_tab)
	{
		if (is_to_big(*str_tab))
			return (0);
		str_tab++;
	}
	return (1);
}
