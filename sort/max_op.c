/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:54:32 by ejanssen          #+#    #+#             */
/*   Updated: 2022/11/18 18:47:45 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	rotate_max(t_stack *stack)
{
	while (get_max(stack) != 0)
		rotate(stack, 1);
}

void	rrotate_max(t_stack *stack)
{
	while (get_max(stack) != 0)
		rrotate(stack, 1);
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
