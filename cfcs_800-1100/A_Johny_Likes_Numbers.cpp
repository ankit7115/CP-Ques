#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,k;
    cin>>n>>k;
    int rem=n%k;
    if(rem==0){
        cout<<n+k;
    }
    else{
        cout<<n+k-rem;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--){
    solve();
    // }
    return 0;
}