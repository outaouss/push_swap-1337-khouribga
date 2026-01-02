/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spilota <spilota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 16:06:41 by outaouss          #+#    #+#             */
/*   Updated: 2026/01/02 18:31:19 by spilota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_last_node(t_node *lst)
{
	if (!lst)
		return (NULL);
	while ((lst)->next)
	{
		(lst) = (lst)->next;
	}
	return (lst);
}

void	rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = find_last_node(*stack);
	*stack = first->next;
	(*stack)->previous = NULL;
	last->next = first;
	first->previous = last;
	first->next = NULL;
}

void	ra(t_node **stack_a, int silent)
{
	rotate(stack_a);
	if (!silent)
		write(1, "ra\n", 3);
}

void	rb(t_node **stack_b, int silent)
{
	rotate(stack_b);
	if (!silent)
		write(1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b, int silent)
{
	rotate(stack_a);
	rotate(stack_b);
	if (!silent)
		write(1, "rr\n", 3);
}
