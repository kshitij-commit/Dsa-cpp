#include<stdio.h>
#include<stdlib.h>

struct dcll{

    char data;
    struct dcll* next;
    struct dcll* prev;

};
struct dcll* head = NULL;
struct dcll* tail = NULL;

void insertAtLast(){
    struct dcll* new;
    new = (struct dcll*)malloc(sizeof(struct dcll));
    printf("Enter data for node: ");
    scanf(" %c", &new->data);

    if(head == NULL){
        new->next = new;
        new->prev = new;
        head = new;
        tail = new;
    }else{
        struct dcll* temp = head;
        tail->next = new;
        new->prev = tail;
        tail = new ;
        new->next = head;
        head->prev = new;


    }

}

void display(){
    if(head == NULL)
        printf("List is empty.");
    else{
        struct dcll* temp = head;
        do{
            printf("|%c|<->", temp->data);
            temp = temp->next;
        }while(temp != head);
    }
}

int main(){
insertAtLast();
insertAtLast();
insertAtLast();
    display();

}