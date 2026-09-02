#include<iostream>
using namespace std;



struct sll{
    int d;
    char ch;
    sll *p;
};
struct sll *head = NULL;

void createNode(sll*& head){
    sll *newNode;
    newNode = (struct sll*) malloc(sizeof(struct sll));
    cout<<"Enter data for node: ";
    cin>>newNode->ch>>newNode->d;

    if(head == NULL){
        head = newNode;
        newNode->p = NULL;
        return;
    }else{
        sll *temp = head;

        while(temp->p != NULL){
            temp = temp->p;
        }
        temp->p = newNode;
        newNode->p = NULL;
    }


}
void display(sll*& head){

    sll* temp = head;
    while(temp->p != NULL){
        cout<<temp->ch<<" "<<temp->d<<endl;
        temp = temp->p;
    }
    return;
}

int main(){

    char c;
    do{
        cout<<"Do you want to add more nodes?Y/N: ";
        cin>>c;
        createNode(head);
    }while(c == 'Y');

    display(head);

}