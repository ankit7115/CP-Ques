#include<iostream>

using namespace std;

int main(){
    int size;
    cin>>size;
    int mat1[size][size];
    int mat2[size][size];
    int mul[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>mat1[i][j];
        }
    }
     for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>mat2[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
              sum=sum+mat1[j][k]*mat2[k][j];  
            }
        mul[i][j]=sum;
        sum=0;
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<mul[i][i]<<" ";
        }
        cout<<endl;
    }
}