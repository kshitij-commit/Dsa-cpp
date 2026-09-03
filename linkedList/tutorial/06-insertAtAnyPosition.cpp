#include<iostream>
using namespace std;



struct sll{
    int d;
    char ch;
    sll *p;
};
struct sll *head = NULL;

// void createNode(sll*& head){
//     sll *newNode;
//     newNode = (struct sll*) malloc(sizeof(struct sll));
//     cout<<"Enter data for node: ";
//     cin>>newNode->ch>>newNode->d;

//     if(head == NULL){
//         head = newNode;
//         newNode->p = NULL;
//         return;
//     }else{
//         sll *temp = head;

//         while(temp->p != NULL){
//             temp = temp->p;
//         }
//         temp->p = newNode;
//         newNode->p = NULL;
//     }


// }
void display(sll*& head){

    sll* temp = head;
    if(head != NULL){
        
            while(temp != NULL){
                cout<<temp->ch<<" "<<temp->d<<endl;
                temp = temp->p;
            }
            
        
        

    }else{
        cout<<"Empty linked list: ";
        return;
    }
    
}
void insertAtBeginning(sll*& head){
    
    sll *newNode;
    newNode =  (struct sll*)malloc(sizeof(struct sll));
    cout<<"Enter data for Node: ";
    cin>>newNode->ch>>newNode->d;
    if(head == NULL){
        newNode->p = NULL;
        head = newNode;
    }else{
        
        newNode->p = head;
        head = newNode;

    }
    return;

    
}
void insertAtMiddle(sll*& head, int data, char ch, int position){
        int count = 0;
        sll *newNode;
        newNode = (struct sll*)malloc(sizeof(struct sll));
        newNode->d = data;
        newNode->ch = ch;
        sll* temp = head;
        while(temp!= NULL){
            count++;
            temp = temp->p;
        }
        if(position < 0 || position > count){
            cout<<"Invalid postion:";
            return;
        }
        if(head == NULL){
            
            newNode->p = NULL;
            head = newNode;
            return;
        }else if(position == 0){
            newNode->p = head;
            head = newNode;
            return;
        }else{
            temp = head;
            for(int i = 0;i<position-1;i++){
                temp = temp->p;
            }
           
            newNode->p = temp->p;
            temp->p = newNode;
        }
}

int main(){

    // char c;
    // do{
    //     cout<<"Do you want to add more nodes?Y/N: ";
    //     cin>>c;
    //     createNode(head);
    // }while(c == 'Y');
    // insertAtBeginning(head);
    // display(head);
    insertAtMiddle(head,25,'v',0);
    display(head);

}