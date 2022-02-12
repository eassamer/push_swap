#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
#include "libft/libft.h"
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <sys/types.h>
# include <signal.h>

typedef struct stack
{
    int *stack_a;
    int *stack_b;
    struct t_s *new;
    int size_a;
    int size_b;
} t_s;

int sorted(int *s,int size);
int ft_strlen2(char **s);
int *translate(int len, char **s);
int digit(char **a);
void create(int ac, char **av,t_s *s);
int doublee(t_s *s);
void    pa(t_s *s);
void    pb(t_s *s);
void    swapa(t_s *s);
void    swapb(t_s *s);
void    sa(t_s *s);
void    sb(t_s *s);
void    ss(t_s *s);
void reverse_a(t_s *s, t_s *new_s);
void reverse_b(t_s *s, t_s *new_s);
void    ra(t_s *s);
void reva(t_s *s,int *arr);
void    rb(t_s *s);
void revb(t_s *s,int *arr);
void rr(t_s *s);
void rra(t_s *s);
void    rrr(t_s *s);
void    rrb(t_s *s);
#endif