#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct node *next;
    struct node *prev;
} node;

typedef struct
{
    int space;
    int val;
    node *left;
    node *right;
    node *next;
    node *prev;
} self;
void init(self *c, int n)
{
    c->space = n;
}
int main()
{
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        return 1;
    }

    free(new_node);
    return 0;
}
