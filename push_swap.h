/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:43:13 by eassamer          #+#    #+#             */
/*   Updated: 2022/02/20 15:19:20 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include "libft/libft.h"
# include "get_next_line/get_next_line.h"
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <sys/types.h>
# include <signal.h>

typedef struct stack
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
	int	*tab;
}	t_s;

int		sorted(int *s, int size);
int		ft_strlen2(char **s);
int		*translate(int len, char **s);
int		digit(char **a);
void	create(int ac, char **av, t_s *s);
int		doublee(t_s *s);
void	pa(t_s *s, int x);
void	pb(t_s *s, int x);
void	swapa(t_s *s);
void	swapb(t_s *s);
void	sa(t_s *s, int x);
void	sb(t_s *s, int x);
void	ss(t_s *s, int x);
void	reverse_a(t_s *s, t_s *new_s, int x);
void	reverse_b(t_s *s, t_s *new_s, int x);
void	ra(t_s *s, int x);
void	reva(t_s *s, int *arr);
void	rb(t_s *s, int x);
void	revb(t_s *s, int *arr);
void	rr(t_s *s, int x);
void	rra(t_s *s, int x);
void	rrr(t_s *s, int x);
void	rrb(t_s *s, int x);
void	sort(t_s *s);
void	sort_3(t_s *s);
void	smart_rotate(int pos, t_s *s);
void	smart_puch(t_s *s);
void	sort_kbir(t_s *s);
void	b_to_a(t_s *s);
void	check_before_rotate(t_s *s, int i);
void	push_to_b(t_s *s, int chunk, int chunk_n, int cnt);
void	upload(t_s *s, char **s2);

#endif
