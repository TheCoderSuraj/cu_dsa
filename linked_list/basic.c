#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

Node *HEAD = NULL;
void insert(int value)
{
    Node *tp = (Node *)malloc(sizeof(Node));
    tp->value = value;
    tp->next = HEAD;
    HEAD = tp;
}

void delete()
{
    if (HEAD == NULL)
    {
        return;
    }
    else if (HEAD->next == NULL)
    {
        HEAD = NULL;
    }
    else
    {
        Node *ptr = HEAD;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = NULL;
    }
}
void display()
{
    Node *ptr = HEAD;
    printf("\nThe values are: ");
    while (ptr != NULL)
    {
        printf("%d, ", ptr->value);
        ptr = ptr->next;
    }
}

int main()
{
    insert(12);
    insert(1);
    display();
    delete ();
    insert(2);
    display();
    delete ();
    display();
}
