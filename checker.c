#include "push_swap.h"

static void push_to_check(t_s *s, char *line)
{
    if (ft_strnstr(line,"sa\n",3))
        sa(s);
    else if (ft_strnstr(line,"sb\n",3))
        sb(s);
    else if (ft_strnstr(line,"ss\n",3))
        ss(s);
}

static void    cheker(t_s *s)
{
    char *line;
    
    line = get_next_line(0);
    while (line && line[0] != '\n')
    {
        push_to_check(s,line);
        free(line);
        line = get_next_line(0);
    }
}
int main(int ac, char **av)
{
    t_s s;

    create(ac,av,&s);
    if (doublee(&s))
    {
        printf("ERROR");
        return (0);
    }
    if (sorted(s.stack_a, s.size_a) || s.size_a  < 1)
        return 0;
    chekcer(&s);
}