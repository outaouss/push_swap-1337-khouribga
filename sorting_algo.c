#include "push_swap.h"

void sort_three(t_node **stack)
{
    t_node *big_index = find_max_index(*stack);

    if (big_index->previous == NULL)
        ra(stack);
    else if (big_index->next != NULL)
        rra(stack);
    if ((*stack)->index > (*stack)->next->index)
        sa(stack); 
}

void sort_five(t_node **stack_a, t_node **stack_b)
{
    t_node *min_index;

    while(stack_len(*stack_a) > 3)
    {
        min_index = find_min_index(*stack_a);
        if (min_index->previous == NULL)
            pb(stack_a, stack_b);
        else if (min_index->next == NULL || min_index->next->next == NULL)
            rra(stack_a);
        else
            ra(stack_a);
    }
    sort_three(stack_a);
    while (*stack_b)
        pa(stack_a, stack_b);
}

void k_sort_phase1(t_node **stack_a, t_node ** stack_b)
{
    int len;
    int range;
    int i;

    i = 0;
    len = stack_len(*stack_a);
    if (len <= 100)
        range = 15; 
    else
        range = 35;
    while (*stack_a)
    {
        if ((*stack_a)->index <= i)
        {
            pb(stack_a, stack_b);
            rb(stack_b);
        }
        else if ((*stack_a)->index <= (i + range))
            pb(stack_a, stack_b);
        else
            ra(stack_a); 
        i++;
    }
}

void k_sort_phase2(t_node **stack_a, t_node **stack_b)
{
    t_node *max_index;
    int pos;
    int len;

    while (*stack_b)
    {
        max_index = find_max_index(*stack_b);
        pos = get_position(*stack_b, max_index);
        len = stack_len(*stack_b);
        while(*stack_b != max_index)
        {
            if (pos <= len / 2)
                rb(stack_b);
            else
                rrb(stack_b);
        }
        pa(stack_a, stack_b);
    }
}

// int main()
// {
//     t_node *node1 = malloc(sizeof(t_node));
//     t_node *node2 = malloc(sizeof(t_node));
//     t_node *node3 = malloc(sizeof(t_node));

//     node1->value = -1;
//     node2->value = 50;
//     node3->value = -2;

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     node1->previous = NULL;
//     node2->previous = node1;
//     node3->previous = node2;

// //     // int i = is_sorted(node1);
// //     // printf("%d\n", i);
//     // node1->index = 0;
//     // node2->index = 0;
//     // node3->index = 0;

// //     printf("%d\n", stack_len(node1));
//     // printf("node1 --> %d\n", node1->index);
//     // printf("node2 --> %d\n", node2->index);
//     // printf("node3 --> %d\n", node3->index);
    
//     assign_index(node1);
//     sort_three(&node1);
//     print_stack(node1);

// //     // printf("after assigning \n");
// // printf("node1 --> %d\n", node1->index);
// // printf("node2 --> %d\n", node2->index);
// // printf("node3 --> %d\n", node3->index);

// }