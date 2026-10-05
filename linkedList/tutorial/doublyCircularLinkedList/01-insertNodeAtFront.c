#include<stdio.h>
#include<stdlib.h>

struct dcll{

    char data;
    struct dcll* next;
    struct dcll* prev;

};
struct dcll* head = NULL;

void insertAtFront(){
    struct dcll* new;
    new = (struct dcll*)malloc(sizeof(struct dcll));
    printf("Enter data for node: ");
    scanf(" %c", &new->data);

    if(head == NULL){
        new->next = new;
        new->prev = new;
        head = new;
    }else{
        struct dcll* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        new->next = head;
        new->prev = temp;
        temp->next = new;
        head->prev = new;
        head = new;

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
    insertAtFront();
    insertAtFront();
    insertAtFront();
    display();

}