#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    int x;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x)
        mp[x]++;
    }
    
    int count=0;
    bool flag=false;
    for(auto it:mp){
        if(it.second==2){
            count++;
            flag=false;
        }
        else if(it.second>2){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<-1;
    }
    else{
        cout<<count;
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