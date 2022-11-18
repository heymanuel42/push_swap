/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:12:35 by ejanssen          #+#    #+#             */
/*   Updated: 2022/11/18 11:06:03 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

int	print_stack(const t_stack stack)
{
	int	idx;

	idx = 0;
	while (idx < stack.nb_el)
	{
		ft_printf("%d ", stack.data[idx]);
		idx++;
	}
	ft_printf("\n");
	return (0);
}

int	sswap(t_stack *a, t_stack *b)
{
	swap(a, 0);
	swap(b, 0);
	ft_printf("%s\n", SS);
	return (0);
}

int	rr_rotate(t_stack *a, t_stack *b)
{
	rotate(a, 0);
	rotate(b, 0);
	ft_printf("%s\n", RR);
	return (0);
}

int	rr_rrotate(t_stack *a, t_stack *b)
{
	rrotate(a, 0);
	rrotate(b, 0);
	ft_printf("%s\n", RRR);
	return (0);
}
