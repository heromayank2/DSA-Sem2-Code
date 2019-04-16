#include<stdio.h>
int insert(int *A,int n , int x){
int k;
printf("Input Value of K th position ");
scanf("%d",&k);
int i=n-1;
while(i>=k){
    A[i+1]=A[i];
    i=i-1;
}
    A[k]=x;
    n=n+1;
    return n;
}
int delete(int *A,int n , int index){
for(int i=index;i<n;i++){
    A[i]=A[i+1];
}
n=n-1;
return n;
}
int traverse(int *A,int n){
for(int i=0;i<n;i++){
    printf("%d\t",A[i]);
}
return 0;
}
int main(){
    //Here We can perform Dynamic Memory Allocation
    int x;
int index;
int n;
int arr[100];
printf("Size Of Array: ");
scanf("%d",&n);
printf("Enter %d Values of your Array\n",n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int o;
printf("Enter the Switch Case 1 for insertion or 2 for deletion or 3 for traversing \n ");
scanf("%d",&o);

switch(o){
case 1:
    printf("Input Value of X: ");
    scanf("%d",&x);
    n=insert(&arr[0],n,x);
    break;
case 2:
    printf("At what Index You what to delete ");
    scanf("%d",&index);
    n=delete(&arr[0],n, index);
    break;
case 3:
    traverse(&arr[0],n);
    break;
default:
    printf("Please Enter valid input");
}
printf("Congrats, Your New Array");

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
