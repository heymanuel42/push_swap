/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:54:32 by ejanssen          #+#    #+#             */
/*   Updated: 2022/11/18 18:47:55 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	rotate_min(t_stack *stack)
{
	while (get_min(stack, NULL) != 0)
		rotate(stack, 1);
}

void	rrotate_min(t_stack *stack)
{
	while (get_min(stack, NULL) != 0)
		rrotate(stack, 1);
}

int	get_min(t_stack *stack, int	*v_min)
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
	if(v_min != NULL)
		*v_min = min;
	return (min_idx);
}
