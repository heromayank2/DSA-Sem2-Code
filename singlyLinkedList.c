#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*start=NULL;

int createNode(int value){
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
int display(){
    struct node *cptr;
    cptr=start;
    printf("START-> ");
    while(cptr!=NULL){
        printf("%d-> ",cptr->data);
        cptr=cptr->next;
    }printf("NULL");
    return 0;
}
int main(){
    int n,a;
    printf("Enter Size of Linked List: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        createNode(a);
    }
    display();
    return 0;
}
