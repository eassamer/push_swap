/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:36:52 by eassamer          #+#    #+#             */
/*   Updated: 2022/02/20 15:10:38 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	rra(t_s *s, int x)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * s->size_a);
	arr[0] = s->stack_a[s->size_a - 1];
	i = 1;
	while (i < s->size_a)
	{
		arr[i] = s->stack_a[i - 1];
		i++;
	}
	reva(s, arr);
	free(arr);
	if (x == 1)
		printf("rra\n");
}

void	rrb(t_s *s, int x)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * s->size_b);
	arr[0] = s->stack_b[s->size_b - 1];
	i = 1;
	while (i < s->size_b)
	{
		arr[i] = s->stack_b[i - 1];
		i++;
	}
	revb(s, arr);
	free(arr);
	if (x == 1)
		printf("rrb\n");
}

void	rrr(t_s *s, int x)
{
	rra(s, 0);
	rrb(s, 0);
	if (x == 1)
		printf("rrr\n");
}
