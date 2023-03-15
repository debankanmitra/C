#include <stdio.h>
#include <stdlib.h>
struct node{
        int data;
        struct node *next;
    };
int main() {
    // WE CAN ALSO WRITE:  struct node *start, *second, *third;
    struct node *start=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    start->data=3;
    start->next=second;
    second->data=4;
    second->next=third;
    printf("%d\t\n",second->next);
    third->data=5;
    third->next=NULL;
    
    struct node *p=start;
    while(p->next!=NULL){
        printf("%d\t",p->data);
        p=p->next;
    } 
    return 0;  
}