#include<stdio.h>
#include<stdlib.h>
//All Sorting Algorithms on ARRAY
int InsertionSort(int arr[],int n){
    int key,i,j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    return 0;
}
int SelectionSort(int arr[],int n){
    int min,i,j,temp;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    return 0;
}
int BubbleSort(int arr[],int n){
    int pass,temp;
    for(pass=n-1;pass>=0;pass--){
        for(int j=0;j<pass;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
return 0;
}
int merge(int arr[],int l,int m,int r){
    int L[100],R[100];
    int n1=m-l+1;
    int n2=r-m;
    int i,j;
    for(i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[j+m+1];
    }
    i=0,j=0;
    L[n1]=1000;
    R[n2]=1000;
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
    }
    return 0;
}
int partition(int arr[],int l,int r){
    int i=l,j=r,temp;
    int pivot=arr[l];
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[j];
    arr[j]=arr[l];
    arr[l]=temp;
    return j;
}
int quickSort(int arr[],int l,int r){
    int j;
    if(l<r){
        j=partition(arr,l,r);
        quickSort(arr,l,j);
        quickSort(arr,j+1,r);
    }
    return 0;
}

int main(){
    int a,b,n;
    int arr[100];
    printf("Size of Array: ");
    scanf("%d",&n);
    printf("Enter Values: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        arr[i]=a;
    }
    printf("Input 1 for Selection Sort 2 for Bubble Sort 3 for Insertion Sort 4 for Merge Sort 5 for Quick Sort: ");
    scanf("%d",&b);
    switch(b){
    case 1:
        SelectionSort(arr,n);
        break;
    case 2:
        BubbleSort(arr,n);
        break;
    case 3:
        InsertionSort(arr,n);
        break;
    case 4:
        mergeSort(arr,0,n-1);
        break;
    case 5:
        quickSort(arr,0,n);
        break;
    }
    printf("Final Array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
