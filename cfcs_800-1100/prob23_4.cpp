#include<iostream>

using namespace std;

void checkdes(int *vec,int &n);
void checkas(int *vec,int &n);

signed main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    if(n<2){
        cout<<"Invalid";
        exit(0);
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]>arr[1]){
        checkdes(arr,n);
    }
    else if(arr[0]<arr[1]){
        checkas(arr,n);
    }
    else{
        cout<<"NOT SORTED"<<endl;
    }

 return 0;
}
void checkdes(int *arr,int &n){
    int flag=0;
    
    for(int i=0;i<n-1;i++){
        if(*(arr+i)>*(arr+i+1)){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1){
       cout<<"NOT SORTED"<<endl;
    }
    else{
        cout<<"Array id sorted in Descending order "<<endl;
    }
}
void checkas(int *arr,int &n){
int flag=0;
    
    for(int i=0;i<n-1;i++){
        if(*(arr+i)<*(arr+i+1)){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1){
       cout<<"NOT SORTED"<<endl;
    }
    else{
        cout<<"Array id sorted in Ascending order "<<endl;
    }
}