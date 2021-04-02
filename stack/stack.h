/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:34:03 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/02 13:01:36 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include <stdio.h>

typedef struct s_validator
{
	int (*const		validate)(struct s_validator *p_this, int val);
	void *const		p_data;
}	t_validator;

typedef struct s_range
{
	const int	min;
	const int	max;
}	t_range;

typedef struct s_prev_val
{
	int	prev_val;
}	t_prev_val;

typedef struct s_stack
{
	size_t		top;
	size_t		size;
	int			*p_buf;
	t_validator	*p_validator;
}	t_stack;

t_stack	*ft_stack_init(size_t size);
int		ft_stack_is_full(const t_stack *p);
int		ft_stack_is_empty(const t_stack *p);
int		ft_validate_range(t_validator *p_this, int val);
int		ft_validate_prev(t_validator *p_this, int val);
int		ft_validate(t_validator *p, int val);
int		ft_stack_push(t_stack *p, int val);
int		ft_stack_pop(t_stack *p, int *p_ret);

#endif
