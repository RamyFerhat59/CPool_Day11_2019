/*
** EPITECH PROJECT, 2019
** my_list_size.c
** File description:
** my_list_size.c
*/

#include <stdlib.h>
#include "./lib/my/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int count = 0;
    linked_list_t *current = begin;

    while (current != NULL) {
        count ++;
        current = current ->next;
    }
    return (count);
}
