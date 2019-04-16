#include<stdio.h>
#include<stdlib.h>

struct node{
struct node *next;
int data;
}*last=NULL;

int createNode(int value){
    struct node *NN,*cptr;
    NN=(struct node*)malloc(sizeof(struct node));
    NN->next=NULL;


}
