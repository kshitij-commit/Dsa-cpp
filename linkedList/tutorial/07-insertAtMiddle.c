#include <stdio.h>
#include <stdlib.h>

struct sll
{
    int data;
    char ch;
    struct sll *p;
};
struct sll *head = NULL;

void insertNode()
{
    struct sll *node;
    node = (struct sll *)malloc(sizeof(struct sll));
    printf("Enter data for node. ");
    scanf(" %c %d", &node->ch, &node->data);

    if (head == NULL)
    {
        node->p = NULL;
        head = node;
    }
    else
    {
        node->p = head;
        head = node;
    }
}

void insertAtMiddle()
{
    struct sll *new;
    int pos;

    int count = 0;
    new = (struct sll *)malloc(sizeof(struct sll));
    printf("Enter data for node: ");
    scanf(" %c %d", &new->ch, &new->data);

    if (head == NULL)
    {
        head = new;
        new->p = NULL;
        return;
    }
    else
    {
        printf("Enter position to insert node.");
        scanf("%d", &pos);

        struct sll *temp = head;
        while (count < (pos - 2))
        {
            temp = temp->p;
            count++;
        }
        new->p = temp->p;
        temp->p = new;
    }
}



int main()
{
    char c;

    do
    {
        printf("Are you want to insert node (Y/N): ");
        scanf(" %c", &c);

        if (c == 'Y')
        {

            insertNode();
        }

    } while (c == 'Y');

    insertAtMiddle();
    printf("\n");
    display();
}