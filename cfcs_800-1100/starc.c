#include<stdio.h>

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j ||i+j<i){
                printf("* ");
            }
        }
        printf("\n");
    }
}