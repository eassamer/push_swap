/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:32:36 by eassamer          #+#    #+#             */
/*   Updated: 2022/02/20 15:08:21 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_s *s, int x)
{
	int	i;
	t_s	new_s;

	i = 0;
	new_s.stack_a = malloc(sizeof(int) * s->size_a - 1);
	new_s.stack_b = malloc(sizeof(int) * s->size_b + 1);
	i = 1;
	new_s.stack_b[0] = s->stack_a[0];
	while (i < s->size_a)
	{
		new_s.stack_a[i - 1] = s->stack_a[i];
		i++;
	}
	i = 1;
	while (i < s->size_b + 1)
	{
		new_s.stack_b[i] = s->stack_b[i - 1];
		i++;
	}
	s->size_a--;
	s->size_b++;
	reverse_b(s, &new_s, x);
	free(new_s.stack_a);
	free(new_s.stack_b);
}

void	reverse_b(t_s *s, t_s *new_s, int x)
{
	int	i;

	i = 0;
	free(s->stack_b);
	s->stack_b = malloc(sizeof(int) * s->size_b);
	while (i < s->size_b)
	{
		s->stack_b[i] = new_s->stack_b[i];
		i++;
	}
	i = 0;
	free(s->stack_a);
	s->stack_a = malloc(sizeof(int) * s->size_a);
	while (i < s->size_a)
	{
		s->stack_a[i] = new_s->stack_a[i];
		i++;
	}
	if (x == 1)
		printf("pb\n");
}

void	pa(t_s *s, int x)
{
	int	i;
	t_s	new_s;

	i = 0;
	new_s.stack_b = malloc(sizeof(int) * s->size_b - 1);
	new_s.stack_a = malloc(sizeof(int) * s->size_a + 1);
	i = 1;
	new_s.stack_a[0] = s->stack_b[0];
	while (i < s->size_b)
	{
		new_s.stack_b[i - 1] = s->stack_b[i];
		i++;
	}
	i = 1;
	while (i < s->size_a + 1)
	{
		new_s.stack_a[i] = s->stack_a[i - 1];
		i++;
	}
	s->size_b--;
	s->size_a++;
	reverse_a(s, &new_s, x);
	free(new_s.stack_a);
	free(new_s.stack_b);
}

void	reverse_a(t_s *s, t_s *new_s, int x)
{
	int	i;

	i = 0;
	free(s->stack_a);
	s->stack_a = malloc(sizeof(int) * s->size_a);
	while (i < s->size_a)
	{
		s->stack_a[i] = new_s->stack_a[i];
		i++;
	}
	i = 0;
	free(s->stack_b);
	s->stack_b = malloc(sizeof(int) * s->size_b);
	while (i < s->size_b)
	{
		s->stack_b[i] = new_s->stack_b[i];
		i++;
	}
	if (x == 1)
		printf("pa\n");
}
