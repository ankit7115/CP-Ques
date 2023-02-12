#include<bits/stdc++.h>
#define SIZE 10
using namespace std;

void sort(char **n){
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            
        }
    }
}

int main(){
    
    char **n;
    n=new char*[SIZE];
    for(int i=0;i<SIZE;i++){
        n[i]=new char[SIZE];
        cout<<"Enter name no. "<<i+1<<" ";
        for(int j=0;j<SIZE;j++){
            cin>>n[i][j];
        }
    }
    sort(n);
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cout<<n[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<SIZE;i++){
        delete[] n[i];
    }
    delete[] n;
}