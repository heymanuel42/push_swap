/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:54:33 by ejanssen          #+#    #+#             */
/*   Updated: 2022/11/18 18:28:58 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort/algo.h"
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

int	has_greather(t_stack *stack, int a)
{
	int	i;

	i = 0;
	while (i < stack->nb_el)
	{
		if (stack->data[i] > a)
			return (1);
		i++;
	}
	return (0);
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
	
	int a_min = 0;
	get_min(a, &a_min);
	while(a->data[0] != a_min)
		push(a, b, 1);
	rrotate(a, 1);
	int b_min = 0;
	get_min(b, &b_min);
	while(b->data[0] != b_min)
		rotate(b, 1);
	push(b, a, 1);
	rotate(a, 1);
	
	free(a);
	free(b);
	return (0);
}
