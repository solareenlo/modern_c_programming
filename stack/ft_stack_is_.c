/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:46:53 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/02 12:47:06 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	ft_stack_is_full(const t_stack *p)
{
	return (p->top == p->size);
}

int	ft_stack_is_empty(const t_stack *p)
{
	return (p->top == 0);
}
