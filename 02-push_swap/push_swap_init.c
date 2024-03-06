#include "push_swap.h"
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

static void	move_nodes(t_stack_node **a, t_stack_node **b)
{
	t_stack_node *cheapest_node;

	cheapest_node = return_cheapest(*b);
	if (cheapest_node->above_median && cheapest_node->target_node->above_median) //both above median
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_median))
}

static void	set_target_node(t_stack_node *a, t_stack_node *b)
{
	t_stack_node *current_a;
	t_stack_node *target_node;
	long	best_match_index;
	
	while (b)
	{
		best_match_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->value > b->value && current_a->value < best_match_index) //aqui busca el mayor menor.
			{
				best_match_index = current_a->value;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
	if (LONG_MAX == best_match_index) //en caso de no encontrar uno adecaudo. Buscamos el nodo mas pequeno para adherir el mas grande detras de este.
		b->target_node = find_smallest(a);
	else
		b->target_node = target_node;
	b = b->next;
	}
}

void	set_current_position(t_stack_node *stack)
{
	int	i;
	int	centerline;

	i = 0;
	if (!stack)
		return ;
	centerline = stack_len(stack) / 2;
	while (stack)
	{
		stack->current_position = i;
		if (i <= centerline)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		++i;
	}
}

void	set_price(t_stack_node *a, t_stack *b)
{
	int len_a;
	int	len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (b)
	{
		b->push_price = b->current_position;
	}
}

void	set_cheapest(t_stack_node *b)
{
	long	best_match_value;
	t_stack_node	*best_match_node;

	if (b == NULL)
		return ;
	best_match_value = LONG_MAX;
	while (b)
	{
		if (b->push_price < best_match_value)
		{
			best_match_value = b->push_price;
			best_match_node = b;
		}
		b = b->next;
	}
	best_match_node->cheapest = true;
}

void	init_nodes(t_stack_node *a, t_stack_node *b)
{
	set_current_position(a);
	set_current_position(b);
	set_target_node(a, b);
	set_price(a, b)
	set_cheapest(b);
}
