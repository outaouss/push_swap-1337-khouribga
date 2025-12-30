#include "push_swap.h"

t_node *find_max_index(t_node *stack)
{
    t_node *big_index;

    if (!stack)
        return NULL;
    big_index = stack;
    while (stack)
    {
        if (stack->index > big_index->index)
            big_index = stack;
        stack = stack->next;
    }
    return (big_index);
}

t_node *find_min_index(t_node *stack)
{
    t_node *min_index;

    if (!stack)
        return NULL;
    min_index = stack;
    while (stack)
    {
        if (stack->index < min_index->index)
            min_index = stack;
        stack = stack->next;
    }
    return (min_index);
}

t_node *find_seconde_index(t_node *stack)
{
    t_node *big_index;
    t_node *seconde_big_index;
    t_node *first;


    if (!stack)
        return NULL;
    big_index = stack;
    first = stack;
    seconde_big_index = stack;
    while (stack)
    {
        if (stack->index > big_index->index)
            big_index = stack;
        stack = stack->next;
    }

    while (first)
    {
        if (first->index != big_index->index)
        {
            if (first->index > seconde_big_index->index)
                seconde_big_index = first;
        }
        first = first->next;
    }
    return (seconde_big_index);
}