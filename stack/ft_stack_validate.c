/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_validate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 12:27:43 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/02 12:28:02 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	ft_validate_range(t_validator *p_this, int val)
{
	t_range	*p_range;

	p_range = (t_range *)(p_this->p_data);
	return (p_range->min <= val && val <= p_range->max);
}

int	ft_validate_prev(t_validator *p_this, int val)
{
	t_prev_val	*p_prev;

	p_prev = (t_prev_val *)p_this->p_data;
	if (val < p_prev->prev_val)
		return (0);
	p_prev->prev_val = val;
	return (1);
}

int	ft_validate(t_validator *p, int val)
{
	if (!p)
		return (1);
	return (p->validate(p, val));
}
