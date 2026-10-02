#include<stdio.h>
#include<stdlib.h>



struct dll{
    char data;
    struct dll* next;
    struct dll* prev;

};
struct dll* head = NULL;
struct dll* tail = NULL;

void deletedLastNode(){

    if(head == NULL)
        printf("List is empty.");
    else{
        struct dll* temp = tail;
        if(tail->prev != NULL){
            tail = tail->prev;
            tail->next = NULL;
            free(temp);

        }
        else{
            free(tail);
            head = NULL;
            tail = NULL;
        }
    }
}

void insertNodeAtFront(){
    struct dll* new;
    new = (struct dll*)malloc(sizeof(struct dll));
    printf("Enter data for node: ");
    scanf(" %c",&new->data);

    if(head == NULL){
        new->next = NULL;
        new->prev = NULL;
        head = new;
        tail = new;
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

int main(){
    insertNodeAtFront();
    insertNodeAtFront();
    insertNodeAtFront();
    deletedLastNode();
    display();

}