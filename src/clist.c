#include <stdio.c>

#define MAX_LISTS 255

typedef struct Node Node {
    int	    key;
    void    data; 
    Node *prev, *next;
}

typedef struct List List {
    Node    *head;
    Node    *tail;
    int     *count;
}

List *newList(int number) {
    List *lst = (List *)malloc(sizeof(struct List));
    lst->head = lst;
    lst->tail = lst;
    lst->count = 1;
    return lst;
}

void delList(List *lst) {
    Node *node = lst;
    while (node->next)
        free(node);
    return;
}
