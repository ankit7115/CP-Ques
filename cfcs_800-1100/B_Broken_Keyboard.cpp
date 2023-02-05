#include<iostream>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()<3){
        cout<<"NO\n";
        return;
    }
    bool ans=false;
    for(int i=1;i<s.size()-1;i=i+3){
        if(i+3==s.size()-1){
            ans=true;
            break;
        }
        if(s[i]!=s[i+1]){
            ans=true;
            break;
        }
    }
    if(ans){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
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