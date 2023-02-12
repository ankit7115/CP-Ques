#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int x,y,n;
    cin>>x>>y>>n;

    int rem=n%x;
    if(rem==y){
        cout<<n<<"\n";
    }
    else if(rem>y){
        cout<<n-(rem-y)<<"\n";
    }
    else{
        cout<<n-rem-(x-y)<<"\n";
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