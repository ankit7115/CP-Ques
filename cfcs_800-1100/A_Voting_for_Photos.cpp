#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

bool compare(pair<int,int> a,pair<int,int>b){
    return a.second<b.second;
}
void solve(){
    int n;
    cin>>n;
    map<int,int> mp;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    int max=INT_MIN;
    vector<pair<int,int>>vec;
    
    
    for(auto it:mp){
        vec.push_back(make_pair(it.first,it.second));
    }
    sort(all(vec),compare);
    for(auto i:vec){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=vec.end()-1;
    cout<<(*it).first<<endl;
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