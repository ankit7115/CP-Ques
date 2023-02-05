#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define all(x) (x).begin(), (x).end()

void solve(){
    int i,j,a;
    cin>>i>>j>>a;
    cout<<j/a+(j%a)<<"\n";
}
signed main(){
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