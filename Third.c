#include<stdio.h>
#include<stdlib.h>
//Circular Linked List

struct node{
int data;
struct node *next;
}*last=NULL;

int createNode(int value){
    struct node *NN;
    NN=(struct node*)malloc(sizeof(struct node));
    NN->data=value;
    NN->next=NULL;
    return NN;
}

int insertNode(int value){
    struct node *NN;
    NN=createNode(value);
    if(last==NULL){
        last=NN;
        last->next=NN;
    }
    else{
        NN->next=last->next;
        last->next=NN;
        last=last->next;
    }

    return 0;
}
int deleteLast(){
    struct node *p;
    if(last==NULL){
        printf("Underflow");

    }
    else{
        p=last->next;
        while(p->next!=last){
            p=p->next;
        }
        p->next=last->next;
        last=p;
    }
    return 0;
}
int deleteBetween(){
    struct node *p,*temp;
    int a;
    p=last->next;
    printf("Enter Index: ");
    while(a){
        temp=p;
        p=p->next;
        a--;
    }
    temp->next=p->next;
    free(p);
    return 0;
}
int display(){
    struct node *p;
    p=last->next;
    printf("%d->",p->data);
    do{
    p=p->next;
    printf("%d->",p->data);

    }while(p!=last);
    printf("last");
    return 0;
}
int main(){
    int a,b;
    printf("Size of List: ");
    scanf("%d",&a);
    printf("Enter Values: ");
    for(int i=0;i<a;i++){
        scanf("%d",&b);
        insertNode(b);
    }
    deleteLast();
    printf("Final Array: ");
    display();
    return 0;
}
