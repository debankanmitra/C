#include <stdio.h>
#include <stdlib.h>
struct node{
        int data;
        struct node *next;
    };
int main() {
    struct node *start, *temp;
    start=(struct node *)malloc(sizeof(struct node));
    temp=(struct node *)malloc(sizeof(struct node));
    start->data=3;
    start->next=NULL;
    
    int n,i;
    temp=start;
    for(i=1;i<7;i++){
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&(newnode->data)); // this part is important  
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }

    temp=start;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    return 0;
}