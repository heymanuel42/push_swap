/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:54:32 by ejanssen          #+#    #+#             */
/*   Updated: 2022/11/18 15:59:06 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	rotate_min(t_stack *stack)
{
	while (get_max(stack) != 0)
		rotate(stack, 1);
}

void	rrotate_min(t_stack *stack)
{
	while (get_max(stack) != 0)
		rrotate(stack, 1);
}

void	push_stack(t_stack *from, t_stack *to)
{
	while (from->nb_el > 0)
		push(from, to, 1);
}

void	do_rotate(t_stack *stack)
{
	int	max_idx;

	max_idx = get_max(stack);
	if (max_idx > stack->nb_el / 2)
		rrotate_min(stack);
	else
		rotate_min(stack);
}

int	get_min(t_stack *stack)
{
	int	i;
	int	min;
	int	min_idx;

	i = 0;
	min = __INT_MAX__;
	min_idx = -1;
	while (i < stack->nb_el)
	{
		if (min > stack->data[i])
		{
			min = stack->data[i];
			min_idx = i;
		}
		i++;
	}
	return (min_idx);
}

int	get_max(t_stack *stack)
{
	int	i;
	int	max;
	int	max_idx;

	i = 0;
	max = -1;
	max_idx = -1;
	while (i < stack->nb_el)
	{
		if (max < stack->data[i])
		{
			max = stack->data[i];
			max_idx = i;
		}
		i++;
	}
	return (max_idx);
}
