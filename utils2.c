/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:05:44 by eassamer          #+#    #+#             */
/*   Updated: 2022/02/20 15:20:43 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	indexing(t_s *s)
{
	int	i;
	int	j;
	int	cnt;

	i = -1;
	j = -1;
	cnt = 0;
	s->stack_a = malloc(sizeof(int) * s->size_a);
	while (++i < s->size_a)
	{
		j = -1;
		while (++j < s->size_a)
			if (i != j && s->tab[j] < s->tab[i])
				cnt++;
		s->stack_a[i] = cnt;
		cnt = 0;
	}
	free(s->tab);
}

void	upload(t_s *s, char **s2)
{
	s->size_a = ft_strlen2(s2);
	s->tab = translate(s->size_a, s2);
	s->size_b = 0;
	s->stack_b = malloc(sizeof(s->stack_b));
	indexing(s);
}

void	create(int ac, char **av, t_s *s)
{
	int		i;
	char	*s0;
	char	**s2;
	char	*tmp;

	i = 0;
	s0 = ft_strdup("");
	while (++i < ac)
	{
		tmp = ft_strjoin(s0, av[i]);
		free(s0);
		s0 = tmp;
		tmp = ft_strjoin(s0, " ");
		free(s0);
		s0 = tmp;
	}
	s2 = ft_split(s0, ' ');
	free(s0);
	if (digit(s2))
		upload(s, s2);
	else
		printf("ERROR");
}
