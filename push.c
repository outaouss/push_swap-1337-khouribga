/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spilota <spilota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 16:06:37 by outaouss          #+#    #+#             */
/*   Updated: 2026/01/01 23:55:43 by spilota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **stack_a, t_node **stack_b)
{
	t_node	*first_a;
	t_node	*first_b;

	if (!*stack_a)
		return ;
	first_a = *stack_a;
	first_b = *stack_b;
	if (first_a->next)
	{
		*stack_a = first_a->next;
		(*stack_a)->previous = NULL;
	}
	else
		*stack_a = NULL;
	first_a->next = first_b;
	if (first_b)
		first_b->previous = first_a;
	first_a->previous = NULL;
	*stack_b = first_a;
}

void	pa(t_node **stack_a, t_node **stack_b, int silent)
{
	push(stack_b, stack_a);
	if (!silent)
		write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b, int silent)
{
	push(stack_a, stack_b);
	if (!silent)
		write(1, "pb\n", 3);
}
