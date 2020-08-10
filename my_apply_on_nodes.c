/*
** EPITECH PROJECT, 2019
** my_apply_on_nodes.c
** File description:
** my_apply_on_nodes
*/

#include <stdlib.h>
#include "./lib/my/mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    linked_list_t *current = begin;

    if (!begin || !f)
        return (84);
    while (current != NULL) {
        (*f)(current->data);
        current = current ->next;
    }
    return (0);
}
