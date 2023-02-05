#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9'  ){
            cout<<"YES";
            return;
        }
    }
    
    cout<<"NO";
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