#include<stdio.h>
#include<stdlib.h>


struct sll{
    int data;
    char ch;
    struct sll* p;
};
struct sll* head = NULL;

void insertAtMiddle(){
    struct sll* new;
    int pos;
    int count = 0;
    new = (struct sll*)malloc(sizeof(struct sll));
    printf("Enter data for node: ");
    scanf("%c %d", &new->ch, &new->data);

    if(head == NULL){
        head = new;
        new->p = NULL;
        return;
    }else{
        printf("Enter position to insert data: ");
        scanf("%d",&pos);
        struct sll* temp  = head;
        while(count < (pos-2)){
            temp = temp->p;
            count++;
        }
        new->p = temp->p;
        temp->p = new;
        
    }
    return;

}

void display(){
    if(head == NULL){
        printf("Empty list");
    }else{
        struct sll* temp = head;
        while(temp != NULL){
            printf("%c %d",temp->ch,temp->data);
            temp = temp->p;
        }
    }

}

int main(){
    display();
    printf("\n");
    insertAtMiddle();
    printf("\n");
    display();

}