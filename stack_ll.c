#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}*start=NULL;

int push(int value){
struct node *NN, *cptr;
NN=(struct node *)malloc(sizeof(struct node));
NN->data=value;
NN->next=NULL;
if(start==NULL){
    start=NN;
}
else{
    cptr=start;
    while(cptr->next!=NULL){
        cptr=cptr->next;
    }
    cptr->next=NN;
    }
return 0;
}
int pop(){
    struct node *cptr,*temp;
    if(start==NULL){
        printf("UNDERFLOW");
        return 0;
    }
    else{
    cptr=start;
    while(cptr->next!=NULL){
        temp=cptr;
        cptr=cptr->next;
    }
    temp->next=NULL;
    int value=cptr->data;
    free(cptr);
    return value;}
 }
int display(){
    struct node *cptr;
    cptr=start;
    while(cptr!=NULL){
        printf("%d\n",cptr->data);
        cptr=cptr->next;
    }
    return 0;
}

 int main(){
    int b,value;
    while(1){
        printf("Enter 1 for Push 2 for Pop 3 for Exit: ");
        scanf("%d",&b);
        switch(b){
        case 1:
            printf("Enter Value to Push: ");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            exit(0);
            break;
        }
        display();
    }
    return 0;
 }
