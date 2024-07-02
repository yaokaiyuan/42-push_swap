/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:49:11 by ykai-yua          #+#    #+#             */
/*   Updated: 2024/06/29 21:53:54 by ykai-yua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_duplicate(int num, char **av, int total_args)
{
	int	i;

	i = 0;
	while (i < total_args)
	{
		if (ft_atoi(av[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '-1')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_check_overflow(const char *num_str)
{
	const char	*int_min_str;
	const char	*int_max_str;
	size_t		len;
	int			is_neg;

	*int_min_str = "-2147483648";
	*int_max_str = "2147483647";
	len = ft_strlen(num_str);
	is_neg = 0;
	if (num_str[0] == '-')
	{
		is_neg = 1;
		num_str++;
		len--;
	}
	if ((is_neg && len > ft_strlen(int_min_str) - 1) || (!is_neg && len > strlen(int_max_str)))
    	return (1);
	if ((is_neg && len == ft_strlen(int_min_str) - 1 && ft_strncmp(num_str, int_min_str + 1, len) > 0) ||
        (!is_neg && len == ft_strlen(int_max_str) && ft_strncmp(num_str, int_max_str, len) > 0))
        return (1);
	return (0);
}

void	ft_check_args(int ac, char **av)
{
	int		i;
	int		j;
	char	**args;
	int		total_args;

	total_args = 0;
	i = 1;
	while (i < ac)
    {
        args = ft_split(av[i], ' ');
        j = 0;
        while (args[j])
        {
            if (!ft_isnum(args[j]))
                ft_error("Error");
            if (ft_check_overflow(args[j]))
                ft_error("Error");
            if (ft_check_duplicate(tmp, av, total_args))
                ft_error("Error");
            total_args++;
            j++;
        }
        ft_free(args);
		i++;
    }
}
