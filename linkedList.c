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
int insertLast(){
    struct node *cptr,*nn;
    int balue;
    cptr=start;
    while(cptr!=NULL){
        cptr=cptr->next;
    }
    printf("Enter The Balue: ");
    scanf("%d",&balue);
    nn=(struct node *)malloc(sizeof(struct node));
    nn->next=NULL;
    nn->data=balue;
    cptr=nn;
    display();
    return 0;
}
int insertFirst(){
    int balue;
    struct node *nn;
    printf("Enter The Balue: ");
    scanf("%d",&balue);
    nn=(struct node *)malloc(sizeof(struct node));
    nn->data=balue;
    nn->next=start;
    start=nn;
    display();
    return 0;
}

int insertGiven(){
    int balue,index;
    struct node *nn,*cptr;
    printf("Enter the Index: ");
    scanf("%d",&index);
    printf("\nEnter the balue: ");
    scanf("%d",&balue);
    cptr=start;
    for(int i=0;i<index;i++){
        cptr=cptr->next;
    }
    nn->data=balue;
    nn->next=cptr->next;
    cptr->next=nn;
    display();
    return 0;
}
int bubbleSort(){


}
int reverse(){
    struct node *a=start,*b=NULL,*c=NULL;
    while(a!=NULL){
        c=a->next;
        a->next=b;
        b=a;
        a=c;
    }
    start= b;
    display();
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
    int n,a,b;
    printf("Enter Size of Linked List: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        createNode(a);
    }
    display();
    printf("\nEnter: \n0 to exit \n1 to insert at last \n2 to insert at first \n3 to insert at given position \n4 to reverse \n5 to delete first node\n6 to delete last node\n7to delete at given node\n8 to quickSort \n9 to selectionSort \n10 to bubbleSort\n");
    scanf("%d",&b);
    switch(b){
        case 0:
            exit(0);
        case 1:
            insertLast();
            break;
        case 2:
            insertFirst();
            break;
        case 3:
            insertGiven();
            break;
        case 4:
            reverse();
            break;
        default:
            exit(0);
    }
    return 0;
}
