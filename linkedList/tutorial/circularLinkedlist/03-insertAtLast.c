#include<stdio.h>
#include<stdlib.h>


struct cll{

    char data;
    struct cll* next;

};
struct cll* head = NULL;

void insertAtLast(){
    struct cll* new;
    new = (struct cll*)malloc(sizeof(struct cll));
    printf("Enter data for node: ");
    scanf(" %c",&new->data);

    if(head == NULL){
        new->next = new;
        head = new;
    }else{
        struct cll* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        new->next = head;
        temp->next = new;
    }
}
void display(){
    if(head == NULL)
        printf("List is empty.");
    else{
        struct cll* temp = head;
        do{
            printf("|%c|->", temp->data);
            temp = temp->next;
        }while(temp != head);
    }
}
int main (){
    insertAtLast();
    insertAtLast();
    insertAtLast();
    display();
}