#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    string s;
    vector<string>vec;
    for(int i=0;i<n;i++){
        cin>>s;
        vec.push_back(s);
    }
    s=vec[0];
    int count=1;
    for(auto it:vec){
        if(s!=it){
            count++;
            s=it;
        }
    }
    cout<<count;
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