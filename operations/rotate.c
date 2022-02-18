# include "../push_swap.h"

void reva(t_s *s,int *arr)
{
    int i;

    i = 0;
    free(s->stack_a);
    s->stack_a = malloc(sizeof(int) * s->size_a);
    while (i < s->size_a)
    {
        s->stack_a[i] = arr[i];
        i++;
    }
}
void    ra(t_s *s)
{
    int *arr;
    int i;

    i = 1;
    arr = malloc(sizeof(int) * s->size_a);
    arr[s->size_a - 1] = s->stack_a[0];
    while(i < s->size_a)
    {
        arr[i - 1] = s->stack_a[i];
        i++;
    }
    reva(s,arr);
    printf("ra\n");
}

void revb(t_s *s,int *arr)
{
    int i;

    i = 0;
    free(s->stack_b);
    s->stack_b = malloc(sizeof(int) * s->size_b);
    while (i < s->size_b)
    {
        s->stack_b[i] = arr[i];
        i++;
    }
}
void    rb(t_s *s)
{
    int *arr;
    int i;

    i = 1;
    arr = malloc(sizeof(int) * s->size_b);
    arr[s->size_b - 1] = s->stack_b[0];
    while(i < s->size_b)
    {
        arr[i - 1] = s->stack_b[i];
        i++;
    }
    reva(s,arr);
    printf("rb\n");
}

void rr(t_s *s)
{
    ra(s);
    rb(s);
}