/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:51:26 by ejanssen          #+#    #+#             */
/*   Updated: 2022/11/18 11:28:05 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H

# include "commands/commands.h"

/// @brief Rotate until smallest on top
/// @param stack 
/// @param n 
void	rotate_min(t_stack *stack);

/// @brief RRotate until smallest on top
/// @param stack 
/// @param n 
void	rrotate_min(t_stack *stack);

/// @brief Push the content of stack b into stack a
/// @param a 
/// @param b 
void	push_stack(t_stack *from, t_stack *to);

/// @brief return the position of the smalest number in given stack
/// @param stack 
/// @return 
int		get_min(t_stack *stack);

/// @brief select the appropriate rotation to do
/// @param stack 
void	do_rotate(t_stack *stack);
#endif