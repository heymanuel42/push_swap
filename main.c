/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:54:33 by ejanssen          #+#    #+#             */
/*   Updated: 2022/11/18 11:37:56 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"
#include <stdlib.h>

int	check_is_numeric(const char *arg)
{
	int		j;
	while (j < ft_strlen(arg))
	{
		if (!ft_isdigit(arg[j])
			&& !(arg[j] == '-' || arg[j] == '+'))
			return (-1);
		j++;
	}
	return (0);
}

t_stack	*create_stack(int n, int id)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack->size = n;
	stack->nb_el = n;
	stack->id = id;
	stack->data = malloc(sizeof(int *) * n);
	if (stack->data == NULL)
	{
		free(stack);
		return (NULL);
	}
	return (stack);
}

t_stack	*build_stack(int n, char **data, int id)
{
	int		i;
	t_stack	*stack;

	i = 0;
	stack = create_stack(n, id);
	if (!stack)
		return (NULL);
	if (data == NULL)
	{
		stack->nb_el = 0;
		ft_bzero(stack->data, n);
		return (stack);
	}
	while (i < n)
	{
		if (check_is_numeric(data[i]) < 0)
		{
			free(stack->data);
			free(stack);
			return (NULL);
		}
		stack->data[i] = ft_atoi(data[i]);
		i++;
	}
	return (stack);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = build_stack(argc - 1, (argv + 1), 'a');
	b = build_stack(argc - 1, NULL, 'b');
	if (a == NULL)
	{
		ft_printf("error\n");
		return (-1);
	}
	while (a->nb_el > 0)
	{
		do_rotate(a);
		push(a, b, 1);
	}
	push_stack(b, a);
	//print_stack(*a);
	free(a);
	free(b);
	return (0);
}
