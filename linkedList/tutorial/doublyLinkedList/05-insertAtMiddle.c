#include<stdio.h>
#include<stdlib.h>

struct dll{
    struct dll* next;
    struct dll* prev;
    char data;
};
struct dll* head = NULL;

void insertAtMiddle(int pos){
    int count = 1;
    struct dll* new ;
    new = (struct dll*)malloc(sizeof(struct dll));

    printf("Enter data for node: ");
    scanf(" %c",&new->data);

    if(head == NULL){
        new->next = NULL;
        new->prev = NULL;
        head = new;
    }else{
        struct dll* temp = head;
        while((pos-1)> count){
            temp = temp->next;
            count++;
        }
            new->next = temp->next;
            new->next->prev = new;
            new->prev = temp;
            temp->next = new;
        

    }
}

void insertAtFront(){
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
        head =  new;
    }
}

void display(){
    if(head == NULL){
        printf("List is empty.");
    }else{
        struct dll* temp = head;
        while(temp != NULL){
            printf("%c",temp->data);
            temp = temp->next;
        }
    }
}

int main(){
    insertAtFront();
    insertAtFront();
    insertAtFront();
    insertAtMiddle(2);
    display();

}