#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Singly linked lists
 * @length: Length of string
 * @next: Point to the next node
 * @str: string
 **/
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
