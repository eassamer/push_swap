# include "../push_swap.h"

void rra(t_s *s)
{
    int *arr;
    int i;
    arr = malloc(sizeof(int) * s->size_a);
    arr[0] = s->stack_a[s->size_a - 1];
    i = 1;
    while (i < s->size_a)
    {
        arr[i] = s->stack_a[i - 1];
        i++;
    }
    reva(s,arr);
    printf("rra\n");
}

void rrb(t_s *s)
{
    int *arr;
    int i;
    arr = malloc(sizeof(int) * s->size_b);
    arr[0] = s->stack_b[s->size_b - 1];
    i = 1;
    while (i < s->size_b)
    {
        arr[i] = s->stack_b[i - 1];
        i++;
    }
    revb(s,arr);
    printf("rrb");
}

void    rrr(t_s *s)
{
    rra(s);
    rrb(s);
    printf("rrr\n");
}