/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:22:22 by eassamer          #+#    #+#             */
/*   Updated: 2022/02/20 13:32:23 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	swapa(t_s *s)
{
	int	tmp;

	tmp = s->stack_a[0];
	s->stack_a[0] = s->stack_a[1];
	s->stack_a[1] = tmp;
}

void	swapb(t_s *s)
{
	int	tmp;

	tmp = s->stack_b[0];
	s->stack_b[0] = s->stack_b[1];
	s->stack_b[1] = tmp;
}

void	sa(t_s *s, int x)
{
	if (s->size_a > 1)
	{
		swapa(s);
		if (x == 1)
			printf("sa\n");
	}
}

void	sb(t_s *s, int x)
{
	if (s->size_b > 1)
	{
		swapb(s);
		if (x == 1)
			printf("sb\n");
	}
}

void	ss(t_s *s, int x)
{
	if (s->size_b > 1 && s->size_a > 1)
	{
		sa(s, 0);
		sb(s, 0);
		if (x == 1)
			printf("ss\n");
	}
}
