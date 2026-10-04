#include<stdio.h>
#include<stdlib.h>


struct cll{
    char data;
    struct cll* next;
};
struct cll* head = NULL;

void deleteMiddleNode(){
    if(head == NULL)
        printf("List is empty.");
    else{
        int pos;
        printf("Enter position to delete Node: ");
        scanf("%d",&pos);
        int count = 1;
        struct cll* temp = head,*temp1;
        while((pos - 1) > count){
            temp = temp->next;
            count++;
        }
        temp1 = temp->next;
        temp->next = temp1->next;
        free(temp1);



    }
}
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
int main(){
    insertAtFront();
    insertAtFront();
    insertAtFront();
    deleteMiddleNode();
    display();

}