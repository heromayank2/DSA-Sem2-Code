#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}*start=NULL;

int insertion(int value){
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
    while(cptr!=NULL){
        printf("%d ",cptr->data);
        cptr=cptr->next;
    }
    return 0;
}

int deletion(){
    if(start==NULL){
        printf("UnderFlow");
        return 0;
    }
    else{
        struct node *temp;
        temp=start;
        start=start->next;
        free(temp);
        return 0;
    }
}
int main(){
    int n,a,b;
    while(1){
        printf("Enter 1 for insertion 2 for deletion 3 for exit: ");
        scanf("%d",&b);
        switch(b){
        case 1:
            printf("Enter Value: ");
            scanf("%d",&a);
            insertion(a);
            break;
        case 2:
            deletion();
            break;
        case 3:
            exit(0);
            break;
            }
            display();}
    return 0;
}
