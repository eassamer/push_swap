# include "push_swap.h"

void    sort_3(t_s *s)
{
    if (s->stack_a[0] > s->stack_a[1] && s->stack_a[0] < s->stack_a[2] && s->stack_a[1] < s->stack_a[2])
        sa(s);
    else if (s->stack_a[0] > s->stack_a[1] && s->stack_a[0] > s->stack_a[2] && s->stack_a[1] > s->stack_a[2])
    {
        sa(s);
        rra(s); 
    }
    else if (s->stack_a[0] > s->stack_a[1] && s->stack_a[1] < s->stack_a[2] && s->stack_a[0] > s->stack_a[2])
        ra(s);
    else if (s->stack_a[0] < s->stack_a[1] && s->stack_a[0] < s->stack_a[2] && s->stack_a[1] > s->stack_a[2])
    {
        sa(s);
        ra(s);
    }
    else if (s->stack_a[0] < s->stack_a[1] && s->stack_a[0] > s->stack_a[2] && s->stack_a[1] > s->stack_a[2])
        rra(s);
}
void smart_puch(t_s *s)
{
    int i;
    int min;
    i = 1;
    min = s->stack_a[0];
    while (i < s->size_a)
    {
        if (min > s->stack_a[i])
            min = s->stack_a[i];
        i++;
    }
    i = 0;
    while (i < s->size_a)
    {
        if (min == s->stack_a[i])
            break ;
        i++;
    }
    smart_rotate(i,s);

}
void sort_5(t_s *s)
{
    int size;
    
    size = s->size_a;
    if (size == 5)
        smart_puch(s);
    smart_puch(s);
    sort_3(s);
    if (size == 5)
        pa(s);
    pa(s);
    

}
void    sort(t_s *s)
{
    if (s->size_a == 2)
        sa(s);
    else if(s->size_a == 3)
        sort_3(s);
    else if (s->size_a <= 5)
    {
        sort_5(s);
    }
    else
        sort_kbir(s);
}