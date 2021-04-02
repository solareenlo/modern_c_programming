/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:25:12 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/02 13:11:19 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*ft_stack_init(size_t size)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->top = 0;
	new->size = size;
	new->p_buf = malloc(sizeof(int) * size);
	if (new->p_buf == NULL)
		return (NULL);
	new->p_validator = NULL;
	return (new);
}

int	ft_stack_push(t_stack *p, int val)
{
	if (!ft_validate(p->p_validator, val) || ft_stack_is_full(p))
		return (0);
	p->p_buf[p->top++] = val;
	return (1);
}

int	ft_stack_pop(t_stack *p, int *p_ret)
{
	if (ft_stack_is_empty(p))
		return (0);
	*p_ret = p->p_buf[--p->top];
	return (1);
}
