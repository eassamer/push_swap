/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:46:27 by eassamer          #+#    #+#             */
/*   Updated: 2022/02/20 12:53:38 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_3(t_s *s)
{
	if (s->stack_a[0] > s->stack_a[1] && s->stack_a[0] < s->stack_a[2]
		&& s->stack_a[1] < s->stack_a[2])
		sa(s, 1);
	else if (s->stack_a[0] > s->stack_a[1] && s->stack_a[0] > s->stack_a[2]
		&& s->stack_a[1] > s->stack_a[2])
	{
		sa(s, 1);
		rra(s, 1);
	}
	else if (s->stack_a[0] > s->stack_a[1] && s->stack_a[1] < s->stack_a[2]
		&& s->stack_a[0] > s->stack_a[2])
		ra(s, 1);
	else if (s->stack_a[0] < s->stack_a[1] && s->stack_a[0] < s->stack_a[2]
		&& s->stack_a[1] > s->stack_a[2])
	{
		sa(s, 1);
		ra(s, 1);
	}
	else if (s->stack_a[0] < s->stack_a[1] && s->stack_a[0] > s->stack_a[2]
		&& s->stack_a[1] > s->stack_a[2])
		rra(s, 1);
}

void	smart_puch(t_s *s)
{
	int	i;
	int	min;

	i = 1;
	min = s->stack_a[0];
	while (i < s->size_a)
	{
		if (min > s->stack_a[i])
			min = s->stack_a[i];
		i++;
	}
	i = 0;
	while (i < s->size_a)
	{
		if (min == s->stack_a[i])
			break ;
		i++;
	}
	smart_rotate(i, s);
}

void	sort_5(t_s *s)
{
	int	size;

	size = s->size_a;
	if (size == 5)
		smart_puch(s);
	smart_puch(s);
	sort_3(s);
	if (size == 5)
		pa(s, 1);
	pa(s, 1);
}

void	sort(t_s *s)
{
	if (s->size_a == 2)
		sa(s, 1);
	else if (s->size_a == 3)
		sort_3(s);
	else if (s->size_a <= 5)
		sort_5(s);
	else
		sort_kbir(s);
}
