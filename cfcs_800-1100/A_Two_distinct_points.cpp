#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l1!=r2){
    cout<<l1<<" "<<r2<<"\n";
    }
    else{
        cout<<r1<<" "<<l2<<"\n";
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