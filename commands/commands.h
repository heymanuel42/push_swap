/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:56:35 by ejanssen          #+#    #+#             */
/*   Updated: 2022/11/15 13:13:47 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMANDS_H
# define COMMANDS_H

# define SA "sa"
# define SB "sb"
# define SS "ss"

# define PA "pa"
# define PB "pb"

# define RA "ra"
# define RB "rb"
# define RR "rr"

# define RRA "rra"
# define RRB "rrb"
# define RRR "rrr"

# include "../libft/libft.h"
# include "../libft/printf/ft_printf.h"

typedef struct stack{
	int		*data;
	int		size;
	int		nb_el;
	char	id;
}t_stack;

int	swap(t_stack *stack, int print);
int	push(t_stack *from, t_stack *to, int print);
int	rotate(t_stack *stack, int print);
int	rrotate(t_stack *stack, int print);

int	sswap(t_stack *a, t_stack *b);
int	rr_rotate(t_stack *a, t_stack *b);
int	rr_rrotate(t_stack *a, t_stack *b);

int	print_stack(const t_stack stack);
#endif