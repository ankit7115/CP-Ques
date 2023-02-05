#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1;i<=w;i++){
        sum=sum+(i*k);
    }
    int t=sum-n;
    if(t<0){
        cout<<0;
    }
    else{
        cout<<t;
    }
    return 0;
}