#include<stdio.h>
#include<stdlib.h>


struct cll{

    char data;
    struct cll* next;

};
struct cll* head = NULL;


void insertAtFront(){
    struct cll* new = NULL;
    new = (struct cll*)malloc(sizeof(struct cll));
    printf("Enter data for node:");
    scanf(" %c", &new->data);
    
    if(head == NULL){
        new->next = new;
        head = new;
    }else{
        struct cll* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        new->next = head;
        head = new;
        temp->next = head;
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

void deleteFrontNode(){
    if(head == NULL)
        printf("List is empty.");
    else{
        struct cll*  temp = head;
        struct cll* temp1 = head;
        if(temp->next == head){
            free(temp);
            head = NULL;
            return;
        }
        while(temp->next != head){
            temp = temp->next;
        }
        
        head = temp1->next;
        free(temp1);
        temp->next = head;
    }
}
int main (){
    insertAtFront();
    insertAtFront();
    insertAtFront();
    deleteFrontNode();
    display();
}