#include<stdio.h>
#include<stdlib.h>
//Doubly Linked List
struct node{
 struct node *prev;
 int data;
 struct node * next;
}*start=NULL;

int createNode(int value){
    struct node *NN;
    NN=(struct node*)malloc(sizeof(struct node));
    NN->prev=NULL;
    NN->data=value;
    NN->next=NULL;
    return NN;
}
// InsertNode or InsertLast
int insertNode(int value){
    struct node *NN,*cptr;
    NN=(struct node*)createNode(value);
    if(start==NULL){
    start=NN;
    }
    else{
        cptr=start;
        while(cptr->next!=NULL){
            cptr=cptr->next;
        }
        cptr->next=NN;
        NN->prev=cptr;
    }return 0;
}
int insertStart(int value){
    struct node *NN;
    NN=(struct node*)createNode(value);
    NN->next=start;
    start->prev=NN;
    start=NN;
    return 0;
}

int insertIndex(int value,int index){
    struct node *NN,*cptr,*temp;
    NN=createNode(value);
    if(start==NULL){
        printf("Underflow ");
    }
    else{
        for(int i=0;i<index-1;i++){
            cptr=cptr->next;
            temp=cptr->next;
        }
        NN->next=cptr->next;
        NN->prev=cptr;
        temp->prev=NN;
        cptr->next=NN;
    }return 0;

}
int display(){
    struct node *cptr=start;
    printf("start <-> ");
    while(cptr!=NULL){
        printf("%d <-> ",cptr->data);
        cptr=cptr->next;
    }
    printf("NULL");
    return 0;
}
int main(){
    int i,a,n,b,index,value;
    printf("Size of List: ");
    scanf("%d",&n);
    printf("Enter Values: ");
    for(i=0;i<n;i++){
        scanf("%d",&a);
        insertNode(a);
    }
    printf("Enter 1 for insert at last 2 for insert at first 3 for insert at any index: ");
    scanf("%d",&b);
    printf("Enter Value to Insert: ");
    scanf("%d",&value);
    switch(b){
        case 1:
            insertNode(value);
            break;
        case 2:
            insertStart(value);
            break;
        case 3:
            printf("Enter Index: ");
            scanf("%d",&index);
            insertIndex(value,index);
            break;
    }
    printf("Final Array: ");
    display();
    return 0;
}
