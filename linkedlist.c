#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node *firstnode;
struct node *nextnode;
struct node *tmpnode;
void print(){
    tmpnode=firstnode;
    while (tmpnode!=NULL){
        printf("%d\n",tmpnode->data);
        tmpnode=tmpnode->next;
    }
}
int main(){
    int a;
    firstnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter number of nodes:\n");
    scanf("%d",&a);
    printf("Enter values:\n");
    scanf("%d",&(firstnode->data));
    firstnode->next=NULL;
    tmpnode=firstnode;
    for (int i = 1; i < a; i++){
        nextnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&(nextnode->data));
        nextnode->next=NULL;
        tmpnode->next=nextnode;
        tmpnode=tmpnode->next;
    }
    print();
    return 0;
}
