#ifndef list_h
#define list_h

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 *
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
