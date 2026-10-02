#include<stdio.h>
#include<stdlib.h>



struct dll{
    char data;
    struct dll* next;
    struct dll* prev;

};
struct dll* head = NULL;


void insertNodeAtFront(){
    struct dll* new;
    new = (struct dll*)malloc(sizeof(struct dll));
    printf("Enter data for node: ");
    scanf(" %c",&new->data);

    if(head == NULL){
        new->next = NULL;
        new->prev = NULL;
        head = new;
    }else{
        new->next = head;
        new->prev = NULL;
        new->next->prev = new;
        head = new;
    }
}
void display(){
    if(head == NULL)
        printf("List is empty.");
    else{
        struct dll* temp = head;
        while(temp != NULL){
            printf(" |%c|->",temp->data);
            temp = temp->next;
        }
    }
}
void deleteMiddleNode(){
    if(head == NULL)
        printf("List is empty.");
    else{
        int pos;
        int count = 1;
        printf("Enter position for deleting node.");
        scanf("%d",&pos);
        struct dll* temp = head, *temp1;
        while((pos-1)>count){
            temp = temp->next;
            count++;
        }
        temp1 = temp->next;
        temp->next = temp1->next;
        temp1->next->prev = temp;
        free(temp1);


    }
}
int main(){
    insertNodeAtFront();
    insertNodeAtFront();
    insertNodeAtFront();
    deleteMiddleNode();
    display();

}