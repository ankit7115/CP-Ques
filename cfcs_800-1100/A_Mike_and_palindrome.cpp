#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    string s;
    cin>>s;
    vector<pair<char,char>>vec;
    int n=s.size()-1;
    for(int i=0;i<=n/2;i++){
        vec.push_back(make_pair(s[i],s[n-i]));
    }
    int count=0;
    bool flag=false;
    for(auto it:vec){
        //cout<<it.first<<" "<<it.second<<endl;
        if(it.first!=it.second){
            count++;
            flag=true;
        }
    }
    if(count==1){
        cout<<"YES";
    } 
    else if(s.size()&1 and !flag){
        cout<<"YES";
    }
    else{
        cout<<"NO\n";
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
    //}
    return 0;
}