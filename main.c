/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:31:24 by iboiraza          #+#    #+#             */
/*   Updated: 2024/11/08 09:33:34 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (0);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		ft_fill_stack(&stack_a, argv, 1);
		free_split(argv);
	}
	else
		ft_fill_stack(&stack_a, argv + 1, 0);
	push_swap(&stack_a, &stack_b);
	free_stack(&stack_a);
	return (0);
}
