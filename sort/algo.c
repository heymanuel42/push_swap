/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:47:57 by ejanssen          #+#    #+#             */
/*   Updated: 2022/11/18 18:48:08 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	push_stack(t_stack *from, t_stack *to)
{
	while (from->nb_el > 0)
		push(from, to, 1);
}

void	do_rotate_min(t_stack *stack)
{
	int	min_idx;

	min_idx = get_max(stack, NULL);
	if (min_idx > stack->nb_el / 2)
		rrotate_max(stack);
	else
		rotate_max(stack);
}

void	do_rotate_max(t_stack *stack)
{
	int	min_idx;

	min_idx = get_max(stack, NULL);
	if (min_idx > stack->nb_el / 2)
		rrotate_max(stack);
	else
		rotate_max(stack);
}
