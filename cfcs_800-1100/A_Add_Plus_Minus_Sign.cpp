#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]=='1' and s[i+1]=='1'){
            cout<<"-";
            s[i+1]='0';
        }
        else if(s[i]=='0' and s[i+1]=='0'){
            cout<<"+";

        }
        else if(s[i]=='0' and s[i+1]=='1'){
            cout<<"+";
        }
        else{
            cout<<"+";
            s[i+1]='1';
        }
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