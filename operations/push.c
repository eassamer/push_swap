#include "../push_swap.h"

void reverse_a(t_s *s, t_s *new_s)
{
    int i;
    i = 0;
    free(s->stack_a);
    s->stack_a = malloc(sizeof(int) * s->size_a);
    while(i < s->size_a)
    {
        s->stack_a[i] = new_s->stack_a[i];
        i++;
    }
    i = 0;
    free(s->stack_b);
    s->stack_b = malloc(sizeof(int) * s->size_b);
    while(i < s->size_b)
    {
        s->stack_b[i] = new_s->stack_b[i];
        i++;
    }
}

void    pa(t_s *s)
{
    int i;
    t_s new_s;

    i = 0;
    new_s.stack_a = malloc(sizeof(int) * s->size_a - 1);
    new_s.stack_b = malloc(sizeof(int) * s->size_b+ 1);
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
    reverse_a(s, &new_s);
}

void reverse_b(t_s *s, t_s *new_s)
{
    int i;
    i = 0;
    free(s->stack_b);
    s->stack_b = malloc(sizeof(int) * s->size_b);
    while(i < s->size_b)
    {
        s->stack_b[i] = new_s->stack_b[i];
        i++;
    }
    i = 0;
    free(s->stack_a);
    s->stack_a = malloc(sizeof(int) * s->size_a);
    while(i < s->size_a)
    {
        s->stack_a[i] = new_s->stack_a[i];
        i++;
    }
}

void    pb(t_s *s)
{
    int i;
    t_s new_s;

    i = 0;
    new_s.stack_b = malloc(sizeof(int) * s->size_b - 1);
    new_s.stack_a = malloc(sizeof(int) * s->size_a+ 1);
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
    reverse_b(s, &new_s);
}