#include<stdio.h>
#include<stdlib.h>

struct dcll{

    char data;
    struct dcll* next;
    struct dcll* prev;

};
struct dcll* head = NULL;

void insertAtMiddle(){
    struct dcll* new;
    new = (struct dcll*)malloc(sizeof(struct dcll));
    printf("Enter data for node: ");
    scanf(" %c", &new->data);

    if(head == NULL){
        new->next = new;
        new->prev = new;
        head = new;
    }else{
        int pos;
        printf("Enter position to insert node: ");
        scanf("%d", &pos);
        int count = 1;
        struct dcll* temp = head;
        while((pos - 1) > count){
            temp = temp->next;
            count++;
        }
        new->next = temp->next;
        new->prev = temp;
        temp->next->prev = new; 
        temp->next = new;

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


insertAtMiddle();
    display();

}