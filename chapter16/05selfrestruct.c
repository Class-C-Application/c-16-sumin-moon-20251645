#include <stdio.h>
#include <stdlib.h>

struct selfref{
    int n;
    struct selfref* next;
};

int main(void)
{
    typedef struct selfref list;

    list* first = NULL, * second = NULL;
    first = (list*) malloc( sizeof(list) );
    second = (list*) malloc( sizeof(list) );

    first->n = 100;
    second->n = 200;
    first->next = second->next = NULL;
    first->next = second;
    
    printf("%p \n", first);
    printf("%d %p\n", first->n, first->next);
    printf("%d\n\n", first->next->n);
    printf("%p\n", second);
    printf("%d %p\n", second->n, second->next);

    free(first);
    free(second);
    return 0;
}