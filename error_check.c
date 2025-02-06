/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   error_check.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/06 15:01:12 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/06 17:54:46 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_to_big(char *arg)
{
	int	len;

	len = ft_strlen(arg);
	if (len > 11)
		return (1);
	else if (len == 11 && ft_strncmp(arg, "-2147483648", 11) > 0)
		return (1);
	else if (len == 10 && ft_strncmp(arg, "2147483648", 10) > 0)
		return (1);
	return (0);
}

int	is_all_digit(char **str_tab)
{
	char	*str_start;

	while (*str_tab)
	{
		if (is_to_big(*str_tab))
			return (0);
		str_start = *str_tab;
		while (**str_tab)
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

int	is_double(char *str, char **str_tab)
{
	while (*(++str_tab))
		if (!ft_strncmp(str, *str_tab, ft_strlen(str) + 1))
			return (1);
	return (0);
}

int	contains_double(char **str_tab)
{
	while (*str_tab)
	{
		if (is_double(*str_tab, str_tab))
			return (1);
		str_tab++;
	}
	return (0);
}

int	error_check(char **str_tab)
{
	if (!is_all_digit(str_tab))
		return (0);
	if (contains_double(str_tab))
		return (0);
	return (1);
}
