/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:39:45 by eassamer          #+#    #+#             */
/*   Updated: 2022/02/20 13:42:09 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static	void	push_to_check(t_s *s, char *line)
{
	if (ft_strnstr(line, "sa\n", 3))
		sa(s, 0);
	else if (ft_strnstr(line, "sb\n", 3))
		sb(s, 0);
	else if (ft_strnstr(line, "ss\n", 3))
		ss(s, 10);
	else if (ft_strnstr(line, "pa\n", 3))
		pa(s, 10);
	else if (ft_strnstr(line, "pb\n", 3))
		pb(s, 10);
	else if (ft_strnstr(line, "ra\n", 3))
		ra(s, 10);
	else if (ft_strnstr(line, "rb\n", 3))
		rb(s, 10);
	else if (ft_strnstr(line, "rr\n", 3))
		rr(s, 10);
	else if (ft_strnstr(line, "rra\n", 4))
		rra(s, 10);
	else if (ft_strnstr(line, "rrb\n", 4))
		rrb(s, 10);
	else if (ft_strnstr(line, "rrr\n", 4))
		rrr(s, 10);
}

static	void	checker(t_s *s)
{
	char	*line;

	line = get_next_line(0);
	while (line && line[0] != '\n')
	{
		push_to_check(s, line);
		free(line);
		line = get_next_line(0);
	}
	if (sorted(s->stack_a, s->size_a))
		printf("\nOK");
	else
		printf("\nKO");
}

int	main(int ac, char **av)
{
	t_s	s;

	create(ac, av, &s);
	if (doublee(&s))
	{
		printf("ERROR");
		return (0);
	}
	if (sorted(s.stack_a, s.size_a) || s.size_a < 1)
		return (0);
	checker(&s);
}
