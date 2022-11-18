/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:15:56 by ejanssen          #+#    #+#             */
/*   Updated: 2022/11/15 14:15:11 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

int	swap(t_stack *stack, int print)
{
	if (stack->size > 1)
	{
		swap_int(&stack->data[0], &stack->data[1]);
		if (print)
		{
			if (stack->id == 'a')
				ft_printf("%s\n", SA);
			else if (stack->id == 'b')
				ft_printf("%s\n", SB);
		}
	}
	return (0);
}

int	push(t_stack *from, t_stack *to, int print)
{
	if (from->nb_el > 0)
	{
		to->data[to->nb_el] = from->data[0];
		to->nb_el++;
		rrotate(to, 0);
		rotate(from, 0);
		from->nb_el--;
		if (print)
		{
			if (to->id == 'a')
				ft_printf("%s\n", PA);
			else if (to->id == 'b')
				ft_printf("%s\n", PB);
		}
	}
	return (0);
}

int	rotate(t_stack *stack, int print)
{
	int	id;
	int	rest;

	if (stack->nb_el > 1)
	{
		id = 0;
		rest = stack->data[0];
		while (id < stack->nb_el)
		{
			stack->data[id] = stack->data[id + 1];
			id++;
		}
		swap_int(&rest, &stack->data[id - 1]);
		if (print)
		{
			if (stack->id == 'a')
				ft_printf("%s\n", RA);
			else if (stack->id == 'b')
				ft_printf("%s\n", RB);
		}
	}
	return (0);
}

int	rrotate(t_stack *stack, int print)
{
	int	id;
	int	rest;

	if (stack->nb_el > 1)
	{
		id = stack->nb_el;
		rest = stack->data[id - 1];
		while (id - 1 > 0)
		{
			stack->data[id - 1] = stack->data[id - 2];
			id--;
		}
		swap_int(&rest, &stack->data[id - 1]);
		if (print)
		{
			if (stack->id == 'a')
				ft_printf("%s\n", RRA);
			else if (stack->id == 'b')
				ft_printf("%s\n", RRB);
		}
	}
	return (0);
}
