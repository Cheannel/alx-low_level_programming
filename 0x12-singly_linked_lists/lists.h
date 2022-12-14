#ifndef LIST_H
#define LIST_H

/**
 * filename: lists.h
 * description: a header file containing the prototypes of all the function
 * used in the project(0x12-singly_linked_lists)
 */

#include <stdlib.h>

/**
 * struct list_s: singly linked list
 * description: singly linked list node structure
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif

