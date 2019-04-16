#include<stdio.h>
int binary2(int arr[],int k,int n){
        int high=n;
        int low=0;
        int mid;
       while(1+low<high){
        mid=(low+high)/2;
        if(arr[mid]==k)
        {
            return 1;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
       }
       return 0;
       }

int binary(int arr[],int p,int r,int k){
    if(r>=p){
        int mid=(r+p)/2;
    if(arr[mid]==k){
        return 1;
    }
    if(arr[mid]>k){
        return binary(arr,p,mid-1,k);
    }
    if(arr[mid]<k){
        return binary(arr,mid+1,r,k);
    }
    }
    return 0;
}
int linear(int arr[],int k,int n){
for(int i=0;i<n;i++){
    if(arr[i]==k){
        return 1;
    }
}
return 0;
}
int main(){
   int arr[100],k=0,y=0,i,n,flag=0,bool_value;
   while(1==1){
   printf("Input the size of array ");
   scanf("%d",&n);
   printf("Input Sorted Array for BInary and any array for Linear\n");
        for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
   printf("\nInput Value to search ");
   scanf("%d",&k);
   printf("1 for Linear 2 for Binary Recursion 3 for Binary iterative\n");
   scanf("%d",&y);
   switch(y){
   case 3:
        flag=binary2(arr,k,n);
       break;
   case 2:
        bool_value=binary(arr,0,n,k);
        break;
   case 1:
        bool_value=linear(arr,k,n);
        break;
   }if(flag==1 || bool_value==1){
   printf("Value is Present\n");
   }else{
   printf("Value is Absent\n");}
   }
   return 0;
}
