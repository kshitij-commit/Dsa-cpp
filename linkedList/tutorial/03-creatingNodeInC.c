#include<stdio.h>
#include<stdlib.h>

struct sll{
    char ch;
    int d;
    struct sll *p;
};

struct sll *head = NULL;

int main(){
    struct sll *newNode;

    newNode = (struct sll*)malloc(sizeof(struct sll));
    newNode->ch = 'g';
    newNode->d = 200;
    newNode->p = NULL;
    if(head == NULL)
        head = newNode;

    printf("%c %d",newNode->ch, newNode->d);
    
    struct sll *newNode2;
    
    newNode2 = (struct sll*)malloc(sizeof(struct sll));
    newNode2->ch = 'a';
    newNode2->d = 100;
    newNode2->p = NULL;
    newNode->p = newNode2;
    

    printf("%c %d", newNode2->ch, newNode2->d);

    struct sll *newNode3;
    newNode3 = (struct sll*)malloc(sizeof(struct sll));

    newNode3->ch = 't';
    newNode3->d  = 50;
    newNode3->p = NULL;
    newNode2->p = newNode3;
    

    printf("%c %d", newNode3->ch, newNode3->d);

    free(newNode);
    free(newNode2);
    free(newNode3);
    return 0;

}