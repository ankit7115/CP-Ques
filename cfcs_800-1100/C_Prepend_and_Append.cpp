#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    int i=0;
    int k=0,l=n;
    bool found=false;
    for(i=0;i<s.size();i++){
       if((s[i]=='0' and s[n-1-i]=='0') or (s[i]=='1' and s[n-1-i]=='1')){
        found=true;
        break;
       }
       else{
        k++;
        l--;
       }
    }
    if(!found){
        cout<<0<<"\n";
    }
    else
    cout<<l-k<<"\n";
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