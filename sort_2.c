/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:53:46 by eassamer          #+#    #+#             */
/*   Updated: 2022/02/20 13:00:13 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	smart_rotate(int pos, t_s *s)
{
	if (pos <= s->size_a / 2)
	{
		while (pos)
		{
			ra(s, 1);
			pos--;
		}
		pb(s, 1);
	}
	else if (pos > s->size_a / 2)
	{
		pos = s->size_a - pos;
		while (pos)
		{
			rra(s, 1);
			pos--;
		}
		pb(s, 1);
	}
}

void	push_to_b(t_s *s, int chunk, int chunk_n, int cnt)
{
	while (s->size_a)
	{
		if (s->stack_a[0] < chunk * chunk_n)
		{
			pb(s, 1);
			if (s->stack_b[0] < chunk * chunk_n - (chunk / 2))
				rb(s, 1);
			cnt++;
		}
		else
			ra(s, 1);
		if (cnt == chunk * chunk_n)
			chunk_n++;
	}
}

void	sort_kbir(t_s *s)
{
	int	chunk;
	int	chunk_n;
	int	cnt;

	cnt = 0;
	chunk_n = 1;
	chunk = (s->size_a / 10) + 20;
	push_to_b(s, chunk, chunk_n, cnt);
	b_to_a(s);
}

void	b_to_a(t_s *s)
{
	int	i;

	while (s->size_b)
	{
		i = 0;
		while (s->stack_b[i] != s->size_b - 1)
			i++;
		check_before_rotate(s, i);
		pa(s, 1);
	}
}

void	check_before_rotate(t_s *s, int i)
{
	if (i <= s->size_b / 2)
	{
		while (i)
		{
			rb(s, 1);
			i--;
		}
	}
	else
	{
		i = s->size_b - i;
		while (i)
		{
			rrb(s, 1);
			i--;
		}
	}
}
