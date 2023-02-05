#include<stdio.h>
void shiftl(int i,int arr[],int n){
   int temp;
    for(int j=i;j<n;j++){
        temp=arr[j+1];
        arr[j]=temp;
    }
}
int delete(int ad,int arr[],int index){
    int temp_size=index;
    for(int i=0;i<index;i++){
        if(i==ad){
            shiftl(i,arr,temp_size);
            temp_size--;
        }
    }
    return temp_size;
}
// void shiftr(int val,int arr[],int index,int n){
//     int temp;
//     arr[index]=val;
//     for(int i=index+1;i<n;i++){
//         temp=arr[i];
//         arr[i+1]=temp;
//     }
// }
// int append(int num,int index){

   

int main(){
    
    int arr[50];
    int n,temp_size,ch;
    scanf("%d",&n);
    temp_size=n;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(1){
        printf("\n1.delete with position\n2.append with position and value\n3.exit\n4.print the array\n\n Enter your choice");
        scanf("%d",&ch);
    switch(ch){
        case 1:int ad;
                scanf("%d",&ad);
                 int temp__size=delete(ad,arr,temp_size);
                    for(int i=0;i<temp__size;i++){
                        printf("%d ",arr[i]);
                    }
                
         }
    }

    
}
