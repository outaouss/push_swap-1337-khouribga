/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spilota <spilota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 16:06:31 by outaouss          #+#    #+#             */
/*   Updated: 2026/01/08 01:08:39 by spilota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_kingdom(t_node **stack_a, t_node **stack_b)
{
	int	len;

	len = stack_len(*stack_a);
	if (len == 2)
		sa(stack_a, 0);
	else if (len == 3)
		sort_three(stack_a);
	else if (len <= 5)
		sort_five(stack_a, stack_b);
	else
	{
		shank_sort_phase1(stack_a, stack_b);
		shank_sort_phase2(stack_a, stack_b);
	}
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**args;
	int		j;

	j = 1;
	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	while (av[j])
	{
		args = ft_split(av[j], ' ');
		fill_stack_a(&stack_a, args);
		free_matrix(args);
		j++;
	}
	assign_index(stack_a);
	if (!(is_sorted(stack_a)) && stack_len(stack_a) > 1)
		sort_kingdom(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
