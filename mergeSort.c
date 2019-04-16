#include<stdio.h>
#include<stdlib.h>
int merge(int arr[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int i,j;
    int L[100],R[100];
    for(i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[m+j+1];
    }
    L[n1]=1000;
    R[n2]=1000;
    i=0;j=0;
    for(int k=l;k<=r;k++){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
    }
return 0;
}
int mergeSort(int arr[],int l,int r){
if(l<r){
   int m=(l+r)/2;
   mergeSort(arr,l,m);
   mergeSort(arr,m+1,r);
   merge(arr,l,m,r);
   }return 0;
}
int main(){
int *arr,n;
while(1){
printf("Size Of Array: ");
scanf("%d",&n);
arr=(int *)malloc(sizeof(int)*n);
printf("Input Your Array: ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
mergeSort(arr,0,n-1);
printf("Your Sorted Array: \n");
for(int j=0;j<n;j++){
    printf("%d ",arr[j]);
}
int p;
printf("\nInput 1 to continue and 0 to exit: ");
scanf("%d",&p);
if(!p){
    exit(0);
}printf("\n");}
return 0;
}
