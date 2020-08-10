/*
** EPITECH PROJECT, 2019
** my_rev_list.c
** File description:
** my_rev_list
*/

#include <stdlib.h>
#include "./lib/my/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *prev = NULL;
    linked_list_t *current = *begin;
    linked_list_t *next = NULL;
    
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *begin = prev; 
}
