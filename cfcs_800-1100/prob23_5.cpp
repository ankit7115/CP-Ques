#include<bits/stdc++.h>

using namespace std;

void convert_binary(int n){
    if(n==0){
        return;
    }
    int rem;
    rem=n%2;
    convert_binary(n/2);
    cout<<rem<<" ";
}

int main(){
    int n;
    cin>>n;

    convert_binary(n);
    return 0;
}