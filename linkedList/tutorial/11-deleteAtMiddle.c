#include<stdio.h>
#include<stdlib.h>

struct sll{
    char ch;
    int data;

    struct sll* p;
}; 
struct sll* head = NULL; 

void insertNode(){

    struct sll* node;
    node = (struct sll*)malloc(sizeof(struct sll));

    printf("Enter data for node: ");
    scanf(" %c %d",&node->ch, &node->data );

    if(head == NULL){
        node->p = NULL;
        head = node;
    }else{
       node->p = head;
       head = node;

    }
}

void display()
{
    if (head == NULL)
    {
        printf("Empty list");
    }
    else
    {
        struct sll *temp = head;
        while (temp != NULL)
        {
            printf("|%c %d|-> ", temp->ch, temp->data);
            temp = temp->p;
        }
    }
}
void deleteMiddleNode(){
    if(head == NULL)
        printf("List is empty.");
    else{
        struct sll* temp = head, *temp1;
        int pos, count = 0;
        printf("Enter position to delete node.");
        scanf("%d",&pos);
        while((pos-2) > count){
            temp = temp->p;
            count++;
        }
        temp1 = temp->p;
        temp->p = temp->p->p;
        free(temp1);
        printf("Node deleted successfully.");

    }
}

int main(){

    char c;

    do{
        printf("Are you want to insert node(Y/N): ");
        scanf(" %c", &c);

        if(c == 'Y' || c == 'y'){
            insertNode();
        }
    }while(c == 'Y' || c == 'y' );
    
    deleteMiddleNode();
    printf("\n");
    display();


}