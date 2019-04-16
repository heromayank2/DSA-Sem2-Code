#include<stdio.h>
#include<stdlib.h>
struct node1{
int data;
struct node1 *next;
}*start1=NULL,*start2=NULL;

int createNode1(int value,struct node *start){
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

int merge(){
struct node1*cptr=start1;
while(cptr->next!=NULL){
        cptr=cptr->next;
    }
    cptr->next=start2;

}

int main(){
int a,b;
printf("=======Ist Linked List======")
printf("Enter Size: ");
scanf("%d",&a);
printf("Enter Values: ");
for(int i =0;i<a;i++){
    scanf("%d",b);
    createNode1(b,start1);
}
printf("=======IInd Linked List=======");
printf("Enter Size: ");
scanf("%d",&a);
printf("Enter Values: ");
for(int i =0;i<a;i++){
    scanf("%d",b);
    createNode(b,start2);
}
printf("Merging Linked List");
merge();
return 0;

}
