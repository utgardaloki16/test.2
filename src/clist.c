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
