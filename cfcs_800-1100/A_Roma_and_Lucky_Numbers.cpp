#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,k,rem;
    cin>>n>>k;
    int count=0;
    vector<int> ans;

    int x;
    for(int i=0;i<n;i++){
        count=0;
        cin>>x;
        while(x!=0){
            rem=x%10;
            if(rem==4 or rem==7){
                count++;
            }
            x/=10;
        }
        ans.push_back(count);
    }
    count=0;
    for(int i:ans){
        if(i<=k){
            count++;
        }
    }
    cout<<count<<"\n";
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--){
    solve();
    //}
    return 0;
}