#include<stdio.h>
#include<stdlib.h>


struct dll{
    char data;
    struct dll* next;
    struct dll* prev;

};struct dll* head = NULL;

void insertAtLast(){
    struct dll* new;
    new = (struct dll*)malloc(sizeof(struct dll));
    printf("Enter data for node: ");
    scanf(" %c",&new->data);
    if(head == NULL){
        head = new;
        new->next = NULL;
        new->prev = NULL;
    }else{
        struct dll* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        new->next = NULL;
        new->prev = temp;
        temp->next = new;
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