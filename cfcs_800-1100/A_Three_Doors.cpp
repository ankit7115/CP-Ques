#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int x,arr[3];
    bool found=false;
    cin>>x;

    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    if(arr[x-1]==0){
        cout<<"NO\n";
        return;
    }
    if(arr[arr[x-1]-1]==0){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";

    
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