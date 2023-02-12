#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int a,b;
    cin>>a>>b;
    int c=min({a,b});
    ll fact=1;
    for(int i=c;i>=1;i--){
        fact*=i;
    }
    cout<<fact;
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