#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    vector<int>s;
    for(int i=9;i>=1;i--){
        if(n>=i){
           s.push_back(i);
           n-=i;
        }
    }
    reverse(all(s));
    for(auto it:s){
        cout<<it;
    }
    cout<<"\n";
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