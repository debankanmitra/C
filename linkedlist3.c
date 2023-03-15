#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;
void createlist(int n){
    head = 0;
    int i;
    for (i = 0; i < n; i++){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data :");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
}
void display(){
    temp = head;
    printf("Total data is :");
    while (temp != 0){
        printf("%3d", temp->data);
        temp = temp->next;
    }
}
void main(){
    int n;
    printf("Enter no of nodes : ");
    scanf("%d", &n);
    createlist(n);
    display();
}
