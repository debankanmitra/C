#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
} * head;
void creat_node(int n){
    struct node *temp, *new_node;
    int i, val;
    head = (struct node *)malloc(sizeof(struct node));
    printf("enter the value of 1 node");
    scanf("%d", &val);
    head->data = val;
    head->next = NULL;
    temp = head;
    for (i = 2; i <= n; i++){
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("enter the value of %d node", i);
        scanf("%d", &val);
        new_node->data = val;
        new_node->next = NULL;
        temp->next = new_node;
        temp = temp->next;
    }
}
void display(){
    struct node *temp;
    temp = head;
    while (temp != NULL){
        printf("data=%d\n", temp->data);
        temp = temp->next;
    }
}
void delet_node(int val){
    struct node *t1, *t2;
    t1 = head;
    t2 = head;
    if (t1->data == val){
        head = head->next;
        free(t1);
    }
    else{
        while (t2->data != val){
            t1 = t2;
            t2 = t2->next;
        }
        t1->next = t2->next;
        free(t2);
    }
}
int main(){
    int n, val;
    printf("enter the no of node to creat");
    scanf("%d", &n);
    creat_node(n);
    display();
    printf("enter the valu you want to delete");
    scanf("%d", &val);
    delet_node(val);
    display();
    return 0;
}
