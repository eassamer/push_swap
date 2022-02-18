#include "push_swap.h"

int ft_strlen2(char **s)
{
    int i;

    i = 0;
    while(s[i])
        i++;
    return (i);
}

int sorted(int *s,int size)
{
    int i;

    i = 0;
    while(i + 1 < size)
    {
        if (s[i] > s[i + 1])
            return 0;
        i++;
    }
    return 1;
}

int *translate(int len, char **s)
{
    int i;
    int *arr;

    i = 0;
    arr = malloc(sizeof(int) * len);
    while (i < len)
    {
        arr[i] = ft_atoi(s[i]);
        i++;
    }
    return (arr);
}

int digit(char **a)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (a[i])
    {
        while (a[i][j])
        {
            if (!ft_isdigit(a[i][j]))
                return 0;
            j++;
        }
        i++;
    }
    return (1);
}

int doublee(t_s *s)
{
    int i;
    int j;

    i = 0;
    while (i < s->size_a)
    {
        j = i + 1;
        while (j < s->size_a)
        {
            if (s->stack_a[i] == s->stack_a[j])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}