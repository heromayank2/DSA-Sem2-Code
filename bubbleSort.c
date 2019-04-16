#include<stdio.h>
int bubSort(int arr[],int n){

}
int main(){
int arr[100],i,n;
printf("Size Of Array: ");
scanf("%d",&n);
printf("Enter Array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
bubSort(arr,n);
printf("Your Sorted Array\n");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}

