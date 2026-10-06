#include<iostream>
using namespace std;


struct dcll{
    char data;
    struct dcll* next;
    struct dcll* prev;
};
struct dcll* head = NULL;


void deleteFirstNode(dcll*& head){
    if(head == NULL)
        cout<<"List is empty.";
    else{
        struct dcll* temp = head,*temp1;
        if(temp->next == head){
            delete temp;
            head = NULL;
            return;
        }
        while(temp->next != head){
            temp = temp->next;
        }
        temp1 = head; 
        head = head->next;
        head->prev = temp;
        temp->next = head;
        delete temp1;
    }
} 
void insertAtFront(dcll*& head){
    struct dcll *newNode = new dcll;
    newNode = (struct dcll*)malloc(sizeof(struct dcll));
    cout<<"Enter data for node: ";
    cin>>newNode->data;

    if(head == NULL){
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
    }else{
        struct dcll* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        newNode->next = head;
        newNode->prev = temp;
        temp->next = newNode;
        head->prev = newNode;
        head = newNode;

    }

}
void display(dcll*& head){
    if(head == NULL)
        cout<<"List is empty.";  
    else{
        dcll* temp = head;
        do{
            cout<<"|"<<temp->data<<"|<->";
            temp = temp->next;
        }
        while(temp != head);
    }

}

int main(){
    insertAtFront(head);
    insertAtFront(head);
    insertAtFront(head);
    insertAtFront(head);
    deleteFirstNode(head);
    display(head);

}