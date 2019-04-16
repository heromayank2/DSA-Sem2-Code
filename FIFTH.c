//ADDITION OF POLYNOMIALS
//Error to be Resolved
#include<stdio.h>
int main(){
    int a,b,c;
    int A[3][2],B[3][2],C[6][2];
    printf("Enter First Array: \n");
    for(int i=0;i<3;i++){
        printf("Enter %d Row: ",i+1);
        for(int j=0;j<2;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter Second Array: \n");
    for(int i=0;i<3;i++){
        printf("Enter %d Row: ",i+1);
        for(int j=0;j<2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    int match,k=0;
    for(int i=0;i<3;i++){
        match =0;
        for(int j=0;j<3;j++){
            if(A[i][0]==B[j][0]){
                C[k][1]=A[i][0]+B[j][0];
                C[k][0]==A[i][0];
                k++;
                break;
                match=1;
            }}}
     for(int i=0;i<3;i++){
            match=0;
        for(int j=0;j<3;j++){
            if(A[j][0]==B[i][0]){
                match=1;
                break;
            }
        }
        if(match==0){
            C[k][1]=B[i][1];
            C[k][0]=B[i][0];
            k++;
        }
     }
    printf("Final Array: \n");
    for(int i=0;i<k+1;i++){
        for(int j=0;j<2;j++){
            printf("%d",C[i][j]);
        }printf("\n");
    }
    return 0;
}
