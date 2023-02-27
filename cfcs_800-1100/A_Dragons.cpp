#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()


void solve(){
    int s,n;
    bool flag=true;
    cin>>s>>n;
    vector<pair<int,int>>vec;
    map<int,int>mp;

    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    sort(all(vec));
    for(auto it:vec){
        if(it.first<s){
            s+=it.second;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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