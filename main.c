#include "push_swap.h"

void create(int ac, char **av,t_s *s)
{
    int i;
    char *s0;
    char **s2;

    i = 1;
    s0 = ft_strdup("");
    while(i < ac)
    {
        s0 = ft_strjoin(s0,av[i]);
        s0 = ft_strjoin(s0," ");
        i++;
    }
    s2 = ft_split(s0,' ');
    if (digit(s2))
    {
        s->size_a = ft_strlen2(s2);
        s->stack_a = translate(s->size_a, s2);
        s->size_b = 0;
        s->stack_b = malloc (sizeof(s->stack_b));
    }
    else
        printf("ERROR");
}

int main(int ac, char **av)
{
    t_s s;
    int i;

    i = 0;
    create(ac,av,&s);
    if (doublee(&s))
    {
        printf("ERROR");
        return (0);
    }
    if (sorted(s.stack_a, s.size_a) || s.size_a  < 1)
        return 0;
    sort(&s);
    // printf("\n");
    // while (i < s.size_a)
    // {
    //     printf("%d|",s.stack_a[i]);
    //     i++;
    // }
}