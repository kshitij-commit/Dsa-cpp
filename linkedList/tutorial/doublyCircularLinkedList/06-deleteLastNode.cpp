#include<iostream>
using namespace std;

struct dcll{
    struct dcll* next;
    struct dcll* prev;
    char data;
};
struct dcll* head = NULL;

void deleteLastNode(dcll*& head){
    if(head == NULL)
        cout<<"List is empty.";
    else{
        struct dcll* temp = head,*temp1;
        while(temp->next->next !=head){
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = head;
        head->prev = temp;
        delete temp1;
    }
} 

void insertAtLast(dcll*& head){
    struct dcll* new1 = new dcll;
    new1 = (struct dcll*)malloc(sizeof(struct dcll));
    cout<<"Enter data for node: ";
    cin>>new1->data;

    if(head == NULL){
        new1->next = new1;
        new1->prev = new1;
        head = new1;
    }else{
        struct dcll* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        new1->prev = temp;
        new1->next = head;
        temp->next = new1;
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
    deleteLastNode(head);
    display(head);


}