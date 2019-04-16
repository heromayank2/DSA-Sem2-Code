//Stack Implementation and Application
#include<stdio.h>
#include<stdlib.h>
#define STACK_LEN 100
int TOP=-1;
int push(char arr[],char value){
    if(TOP==STACK_LEN){
        printf("Overflow Conditions");
    }
    else{
        TOP=TOP+1;
        arr[TOP]=value;
    }
    return 0;
}
char pop(char arr[]){
    char value;
    if(TOP==-1){
        printf("Parenthesis Not Matched!");
        exit(0);
        return 0;
    }
    else{
        value=arr[TOP];
        TOP=TOP-1;
    }
    return value;
}
int main(){
char arr[100];
printf("Enter Expression: ");
scanf("%s",arr);
for(int i=0;arr[i]!='\0';i++){
    if(arr[i]=='('){
        push(arr,'(');
    }
    if(arr[i]==')'){
        pop(arr);
    }
}
if(TOP==-1){
    printf("Parenthesis Matched!");
}
else{
    printf("Parenthesis Not Matched!");
}return 0;
}
