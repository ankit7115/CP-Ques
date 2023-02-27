#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int a[4];
    int m=INT_MIN;
    for(int i=0;i<4;i++){
        cin>>a[i];
        m=max({a[i],max});
    }
    for(int i=0;i<4;i++){
        if(a[i]!=m){
            cout<<m-a[i]<<" ";
        }
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