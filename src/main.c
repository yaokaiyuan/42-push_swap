/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 00:11:15 by ykai-yua          #+#    #+#             */
/*   Updated: 2024/06/29 21:24:35 by ykai-yua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	initstack(t_list **stack, int ac, char **av)
{
	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		i = 1;
		args = av;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (ac == 2)
		ft_free(args);
}

static void sortstack(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) < 6)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (ac < 2)
		return (-1);
	ft_check_args(ac, av);
}


int	main(int ac, char **av)
{
	char	**str_arr;
	t_list	*stack_a;

	// Check if the str only contains spaces and digits, not including checking overflow
	check_valid(av); // exit 1 when failed
	// Divide all the str to only 1 number, checking overflow
	str_arr = div_str_check_over(av);
	// put into list 
	stack_a = fill_list(str_arr);
	// 


}

void	check_valid(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		if ()
	}
}