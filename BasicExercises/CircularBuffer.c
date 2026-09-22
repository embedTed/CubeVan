#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
    struct node *prev;
} node;
// attempting circular buffer pointers will continue tomorrow
node *left = NULL;
node *right = NULL;
node *new_node = NULL;

int main()
{
    new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        return 1;
    }

    free(new_node);
    return 0;
}
