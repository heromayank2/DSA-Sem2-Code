//Implementing Stack using Linked List.
#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *next;
    int data;
}*start=NULL;
int createNode(int value){
    struct node* NN;
    NN=(struct node*)malloc(sizeof(struct node));
    NN->data=value;
    NN->next=NULL;
    return NN;
}
int push(int value){
    struct node *NN;
    NN=createNode(value);
    if(start==NULL){
        start=NN;
    }
    else{
        NN->next=start;
        start=NN;
    }
    return 0;
}
int pop(){
    int value;
    struct node *temp;
    if(start==NULL){
        return NULL;
    }
    else{
        temp=start;
        start=start->next;
        value=temp->data;
        free(temp);
    return value;
    }
}
int display(){
 struct node *p=start;
 while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
 }
 return 0;
}
int main(){
    int a,b,value,n;
    printf("Size of Array: ");
    scanf("%d",&n);
    printf("Enter Values: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        push(a);
    }
    while(1){
    printf("Enter 1 for Push 0 for Pop 2 to exit: ");
    scanf("%d",&b);
    switch(b){
    case 0:
        pop();
        break;
    case 1:
        printf("Enter Value to Push ");
        scanf("%d",&value);
        push(value);
        break;
    case 2:
        exit(0);
    }
    display();
    }return 0;
}
