#include<stdio.h>
#include<stdlib.h>

int arr[5];
int TOP = -1;

int push(int value){
    if(TOP==4){
        printf("Overflow");
        return -1;
    }
    arr[++TOP]=value;
    return 0;
}

int pop(){
    if(TOP==-1){
        printf("Underflow");
        return -1;
    }
    TOP-=1;
    return 0;
}

int main(){
    int a,n,b;
    while(1){
    printf("Enter 1 for PUSH 2 for POP 0 for EXIT");
    scanf("%d",&b);
    switch(b){
    case 1:
        printf("Enter Value to Push");
        scanf("%d",&a);
        push(a);
        break;
    case 2:
        pop();
        break;
    case 0:
        exit(0);
        break;
    }
    printf("New Array ");
    for(int j=TOP;j>-1;j--){
        printf("%d ",arr[j]);
    }}
    return 0;
}
