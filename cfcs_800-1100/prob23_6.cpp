#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position :: ";
    int pos;
    cin>>pos;

    int ch=arr[pos];
    int cl=0,cr=0;
    for(int i=0;i<pos;i++){
        if(arr[i]<ch){
            cl++;
        }
    }
    for(int i=pos+1;i<n;i++){
        if(arr[i]>ch){
            cr++;
        }
    }
   cout<<" left < array[pos] = "<<cl<< " right > array[pos] = "<<cr;
}