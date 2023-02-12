#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    int x;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    auto it1=--mp.end();
    auto it2=--(--mp.end());
    //cout<<(*it1).first<<" "<<(*it2).first<<endl;
    ll mul=(*it1).first;
    mul*=(*it2).first;
    cout<<mul<<"\n";
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