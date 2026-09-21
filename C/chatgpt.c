#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct node
{
    int data ;
    struct node *next ;
}node;
node *head = NULL;

void reverse(){
    if (head==NULL){return;}
    node* current = head , *previous=NULL,*nextNode=NULL;
    while (current!=NULL)
    {
        nextNode=current->next;
        current->next=previous;
        previous=current;
        current=nextNode;
    }
    head=previous;
}
int main (){

}