#include<iostream>
using namespace std;

struct dcll{
    struct dcll* next;
    struct dcll* prev;
    char data;
};
struct dcll* head = NULL;
struct dcll* tail = NULL;

void deleteLastNode(dcll*& head){
    if(head == NULL)
        cout<<"List is empty.";
    else{
        struct dcll* temp = head,*temp1;
        if(head->next == head){
            delete temp;
            tail = NULL;
            head = NULL;
            return;
        }
        temp1 = tail;
        tail->prev->next = head;
        tail = tail->prev;
        delete temp1;
        head->prev = tail;

        
    }
} 

void insertAtLast(dcll*& head){
    struct dcll* new1 = new dcll;
    // new1 = (struct dcll*)malloc(sizeof(struct dcll));
    cout<<"Enter data for node: ";
    cin>>new1->data;

    if(head == NULL){
        new1->next = new1;
        new1->prev = new1;
        head = new1;
        tail = new1;
    }else{
        struct dcll* temp = head;
        new1->prev = tail;
        tail->next = new1;
        tail = new1; 
        new1->next = head;
        head->prev = new1;

    }

}
void display(dcll*& head){
    if(head == NULL)
        cout<<"List is empty.";
    else{
        struct dcll* temp = head;
        do{
            cout<<"|"<<temp->data<<"|<->";
            temp = temp->next;

        }while(temp != head);
    }
}

int main(){
    insertAtLast(head);
    insertAtLast(head);
    insertAtLast(head);
    insertAtLast(head);
    // deleteLastNode(head);
    display(head);


}