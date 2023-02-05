#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int m,s;
    cin>>m>>s;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    ll sum=accumulate(arr,arr+m,0l);
    if(sum>=s){
        cout<<
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