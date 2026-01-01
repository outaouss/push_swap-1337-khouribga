/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spilota <spilota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 16:06:39 by outaouss          #+#    #+#             */
/*   Updated: 2026/01/01 23:55:24 by spilota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = find_last_node(*stack);
	last->previous->next = NULL;
	last->next = *stack;
	last->previous = NULL;
	(*stack)->previous = last;
	*stack = last;
}

void	rra(t_node **stack_a, int silent)
{
	reverse_rotate(stack_a);
	if (!silent)
		write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b, int silent)
{
	reverse_rotate(stack_b);
	if (!silent)
		write(1, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b, int silent)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	if (!silent)
		write(1, "rrr\n", 4);
}
