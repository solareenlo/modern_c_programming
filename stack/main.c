/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:08:47 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/02 13:11:43 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	main(void)
{
	t_stack	*stack;

	stack = ft_stack_init(10);
	ft_stack_push(stack, 1);
	ft_stack_push(stack, 2);
	if (ft_stack_is_full(stack))
		printf("stack is full.\n");
	else
		printf("stack is not full.\n");
	return (0);
}
