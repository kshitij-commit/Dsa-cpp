#include<stdio.h>
#include<stdlib.h>


struct dll{
    char data;
    struct dll* next;
    struct dll* prev;

};
struct dll* head = NULL;
struct dll* tail = NULL;

void insertAtLast(){
    struct dll* new;
    new = (struct dll*)malloc(sizeof(struct dll));
    printf("Enter data for node: ");
    scanf(" %c",&new->data);
    if(head == NULL){
        head = new;
        tail = new;
        new->next = NULL;
        new->prev = NULL;
    }else{
       new->next = NULL;
       new->prev = tail;
       tail->next = new;
       tail = new;
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
    insertAtLast();
    display();

}