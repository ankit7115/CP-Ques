#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int l,r;
    cin>>l>>r;
    int rem=r%l;
    if(rem==0){
        cout<<l<<" "<<r<<"\n";
    }
    else{
        cout<<l<<" "<<r-rem<<"\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    solve();
    }
    return 0;
}