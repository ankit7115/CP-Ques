#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    vector<int> que;
    for(int i=1;i<=10;i++){
        que.push_back(i*5);
    }
    int rem,n,k;
    cin>>n>>k;
    rem=240-k;
    int sum=0,ans,flag=0;
    for(int i=1;i<=n;i++){
        sum+=que[i-1];
        if(sum<=rem){
            flag=1;
            continue;
        }
        else{
            ans=i-1;
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<n;
    }
    else
    cout<<ans;
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