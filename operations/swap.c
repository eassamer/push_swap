# include "../push_swap.h"

void    swapa(t_s *s)
{
    int tmp;

    tmp = s->stack_a[0];
    s->stack_a[0] = s->stack_a[1];
    s->stack_a[1] = tmp;
}

void    swapb(t_s *s)
{
    int tmp;

    tmp = s->stack_b[0];
    s->stack_b[0] = s->stack_b[1];
    s->stack_b[1] = tmp;
}

void    sa(t_s *s)
{
    if (s->size_a > 1)
    {
        swapa(s);
        printf("sa\n");
    } 
}

void    sb(t_s *s)
{
    if (s->size_b > 1)
    {
        swapb(s);
        printf("sb\n");
    }
}

void    ss(t_s *s)
{

    if (s->size_b > 1 && s->size_a > 1)
    {
        swapa(s);
        swapb(s);
        printf("ss\n");
    }

}