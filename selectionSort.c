#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <windowsx.h>
#include <dos.h>
#include <dir.h>
int selectSort(int arr[],int n){
    int temp,min;
for(int i=0;i<n;i++){
    min=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
}
return 0;
}
int bubbleSort(int arr[],int n){
int temp;
for(int pass=n-1;pass>=0;pass--){
    for(int i=0;i<pass;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
return 0;
}
int insertionSort(int arr[],int n){
    int key,i,j;
for(i=1;i<n;i++){
    key=arr[i];
    j=i-1;
    while(j>=0&&arr[i]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
return 0;
}
/*void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}*/
int main(){
int *arr,i,n,s;
while(1==1){
printf("\nSize Of Array: ");
scanf("%d",&n);
arr=(int*)malloc(sizeof(int)*n);
printf("Enter Array: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("1 for SelectionSort 2 for Bubble Sort 3 for Insertion Sort\n");
scanf("%d",&s);
switch(s){
   case 3:
        insertionSort(arr,n);
        break;
   case 2:
       bubbleSort(arr,n);
       break;
   case 1:
       selectSort(arr,n);
       break;
   }
printf("Your Sorted Array\n");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}int p;
printf("\nInput 1 to continue and 0 to exit: ");
scanf("%d",&p);
if(!p){
    exit(0);
}
//Beep(7000,2000);
/*
PlaySound("C:/thats-it",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
int randomnumber;
randomnumber = rand() % 10;
SetColor(randomnumber+5);*/
}
return 0;
}


