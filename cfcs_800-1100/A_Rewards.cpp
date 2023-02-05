#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum=n*(n+1)/2;
    long long add=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        add+=arr[i];
    }
    cout<<sum-add;
    return 0;
}