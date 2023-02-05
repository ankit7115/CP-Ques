#include<stdio.h>
#include<stdlib.h>

int main(){
    
    
    int (*arr)[3]=(int (*)[3])malloc(3*3*sizeof(int));
    int *brr[3];

    for(int i=0;i<3;i++){
       
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   for(int i=0;i<3;i++){
        brr[i]=(int *)malloc(3*sizeof(int));
        for(int j=0;j<3;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    for( int i = 0 ; i < 3 ; i++ ){
        for(int j=0;j<3;j++){
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
     for( int i = 0 ; i < 3 ; i++ ){
        for(int j=0;j<3;j++){
            printf("%d ",*(*(brr+i)+j));
        }
        printf("\n");
    }
    for( int i = 0 ; i < 3 ; i++ ){
        for(int j=0;j<3;j++){
            printf("%d ",(*(*(arr+i)+j)+(*(*(brr+i)+j))));
        }
        printf("\n");
    }
}