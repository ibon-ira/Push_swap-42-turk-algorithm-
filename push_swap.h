/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:19:13 by iboiraza          #+#    #+#             */
/*   Updated: 2024/10/22 12:33:56 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				nbr;
	int				index;
	int				push_cost;
	int				above_median;
	int				cheapest;
	struct s_list	*target_node;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

void	free_stack(t_list **stack);
int		error_syntax(char *str_nbr);
int		error_repetition(t_list *a, int nbr);
void	free_errors(t_list **a, char **argv, int flag);
void	free_split(char **argv);
void	ft_fill_stack(t_list **a, char **argv, int flag);
char	**ft_split(char const *s, char c);
void	init_nodes_a(t_list *a, t_list *b);
void	init_nodes_b(t_list *a, t_list *b);
void	current_index(t_list *stack);
void	set_cheapest(t_list *stack);
t_list	*get_cheapest(t_list *stack);
void	min_on_top(t_list **a);
void	prep_for_push(t_list **s, t_list *n, char c);
int		stack_len(t_list *stack);
bool	is_stack_sorted(t_list *stack);
t_list	*find_min(t_list *stack);
t_list	*find_max(t_list *stack);
void	sa(t_list **a, bool print);
void	sb(t_list **b, bool print);
void	ss(t_list **a, t_list **b, bool print);
void	ra(t_list **a, bool print);
void	rb(t_list **b, bool print);
void	rr(t_list **a, t_list **b, bool print);
void	rra(t_list **a, bool print);
void	rrb(t_list **b, bool print);
void	rrr_sub(t_list **b, bool print);
void	rrr(t_list **a, t_list **b, bool print);
void	pa(t_list **a, t_list **b, bool print);
void	pb(t_list **b, t_list **a, bool print);
void	push_swap(t_list **a, t_list **b);
//void	sort_three(t_list *stack);
void	sort_three(t_list **a);
void	sort_big_stacks(t_list **a, t_list **b);

#endif
