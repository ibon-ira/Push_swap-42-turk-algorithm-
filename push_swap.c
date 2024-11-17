/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:20:33 by iboiraza          #+#    #+#             */
/*   Updated: 2024/11/12 12:02:44 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **a)
{
	int	val1;
	int	val2;
	int	val3;

	val1 = (*a)->nbr;
	val2 = (*a)->next->nbr;
	val3 = (*a)->next->next->nbr;
	if (val1 > val2 && val2 > val3)
	{
		sa(a, false);
		rra(a, false);
	}
	else if (val1 > val2 && val2 < val3 && val1 > val3)
		ra(a, false);
	else if (val1 > val3 && val2 < val3)
		ra(a, false);
	else if (val1 < val2 && val2 > val3 && val1 > val3)
		rra(a, false);
	else if (val1 < val2 && val2 > val3 && val1 < val3)
	{
		sa(a, false);
		ra(a, false);
	}
	else if (val1 > val2 && val2 < val3 && val1 < val3)
		sa(a, false);
}

int	ft_stack_size(t_list *stack)
{
	int		size;
	t_list	*current;

	size = 0;
	current = stack;
	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}

void	sort_stack(t_list **a, t_list **b)
{
	int	size;

	size = ft_stack_size(*a);
	if (size == 2)
		sa(a, false);
	else if (size == 3)
		sort_three(a);
	else
		sort_big_stacks(a, b);
}

bool	is_stack_sorted(t_list *stack)
{
	while (stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void	push_swap(t_list **a, t_list **b)
{
	if (!is_stack_sorted(*a))
		sort_stack(a, b);
	return ;
}
