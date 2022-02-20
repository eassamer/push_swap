/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:38:37 by eassamer          #+#    #+#             */
/*   Updated: 2022/02/20 15:05:28 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_s	s;
	int	i;

	i = 0;
	create(ac, av, &s);
	if (doublee(&s))
	{
		printf("ERROR");
		return (0);
	}
	if (sorted(s.stack_a, s.size_a) || s.size_a < 1)
		return (0);
	sort(&s);
	free(s.stack_a);
	free(s.stack_b);
}
