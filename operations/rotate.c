/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:35:05 by eassamer          #+#    #+#             */
/*   Updated: 2022/02/20 15:11:13 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	reva(t_s *s, int *arr)
{
	int	i;

	i = 0;
	free(s->stack_a);
	s->stack_a = malloc(sizeof(int) * s->size_a);
	while (i < s->size_a)
	{
		s->stack_a[i] = arr[i];
		i++;
	}
}

void	ra(t_s *s, int x)
{
	int	*arr;
	int	i;

	i = 1;
	arr = malloc(sizeof(int) * s->size_a);
	arr[s->size_a - 1] = s->stack_a[0];
	while (i < s->size_a)
	{
		arr[i - 1] = s->stack_a[i];
		i++;
	}
	reva(s, arr);
	free(arr);
	if (x == 1)
		printf("ra\n");
}

void	revb(t_s *s, int *arr)
{
	int	i;

	i = 0;
	free(s->stack_b);
	s->stack_b = malloc(sizeof(int) * s->size_b);
	while (i < s->size_b)
	{
		s->stack_b[i] = arr[i];
		i++;
	}
}

void	rb(t_s *s, int x)
{
	int	*arr;
	int	i;

	i = 1;
	arr = malloc(sizeof(int) * s->size_b);
	arr[s->size_b - 1] = s->stack_b[0];
	while (i < s->size_b)
	{
		arr[i - 1] = s->stack_b[i];
		i++;
	}
	revb(s, arr);
	free(arr);
	if (x == 1)
		printf("rb\n");
}

void	rr(t_s *s, int x)
{
	ra(s, 0);
	rb(s, 0);
	if (x == 1)
		printf("rr");
}
