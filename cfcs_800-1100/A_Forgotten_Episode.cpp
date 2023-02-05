#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    //map<int,int> m;
    
     int arr[n-1],brr[n];
    for(int i=0;i<n-1;i++){
         cin>>arr[i];
         brr[i]=i+1;
     }

     sort(arr,arr+n-1);
     int found=0;

    for(int i=0;i<n-1;i++){
        if(arr[i]!=brr[i]){
            cout<<brr[i];
            found=1;
            break;
        }
    }
    if(found==0){
        cout<<n;
    }
    //  for(int i=1;i<n;i++){
    //     m[arr[i-1]]=i;
    // }
    
    // for(auto it:m){
    //     if(it.first!=it.second){
    //         cout<<it.second;
    //         break;
    //     }
    // }

    
    return 0;
}