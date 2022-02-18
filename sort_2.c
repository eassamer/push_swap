# include "push_swap.h"

void smart_rotate(int pos, t_s *s)
{
    if (pos <= s->size_a / 2)
    {
        while (pos)
        {
            ra(s);
            pos--;
        }
        pb(s);
    }
    else if (pos > s->size_a / 2)
    {
        pos = s->size_a - pos;
        while (pos)
        {
            rra(s);
            pos--;
        }
        pb(s);
    }
}

void    sort_kbir(t_s *s)
{
    while (s->size_a != 0)
    {
        smart_puch(s);
    }
    while(s->size_b != 0)
    {
        pa(s);
    }
}