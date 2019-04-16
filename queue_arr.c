#include<stdio.h>
#include<stdlib.h>
int arr[5];
int FRONT=-1,REAR=-1;
int insertion(int value){
    if(REAR==99){
        printf("Overflow");
        return 0;
    }
    else if(REAR==-1){
        REAR+=1;
        FRONT+=1;
        arr[FRONT]= value;
    }
    else{
        arr[++REAR]=value;
    }
    return 0;
}
int deletion(){
    if(FRONT ==-1 ){
        printf("Underflow");
    }
    else if(FRONT ==REAR){
        FRONT =-1;
        REAR =-1;
    }
    else{
        FRONT+=1;
    }
    return 0;
}
int main(){
    int n,a,b;
    while(1){
    printf("Enter 1 for INSERTION 2 for DELETION 0 for EXIT");
    scanf("%d",&b);
    switch(b){
    case 1:
        printf("Enter Value to Push");
        scanf("%d",&a);
        insertion(a);
        break;
    case 2:
        deletion();
        break;
    case 0:
        exit(0);
        break;
    }
    printf("New Queue");
    for(int i=FRONT;i<=REAR;i++){
        printf("%d ",arr[i]);
    }}
    return 0;
}
