#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll> arr;
    if(k<n/2){
    for(ll i=1;i<=n;i++){
        if(i%2!=0){
            arr.push_back(i);
        }
    }
    cout<<arr[k-1];
    }
    else{
    
        cout<<2*(k-n/2);
    
    
    }
    
    return 0;
}