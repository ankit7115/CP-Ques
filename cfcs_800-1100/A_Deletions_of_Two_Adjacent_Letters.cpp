#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    vector<pair<int,int>> ans;
    for(int i=0;i<=s.size();i++){
        if(s[i]==c){
            ans.push_back(make_pair(i,s.size()-1-i));
        }
    }
    for(auto it:ans){
        if(it.first%2==0 and it.second%2==0){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";

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