#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count8=0;
    int mul=n/11;
    for(int i=0;i<n;i++){
        if(s[i]=='8'){
            count8++;
        }
    }
    if(mul>=count8){
        cout<<count8;
    }
    else{
        cout<<mul;
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