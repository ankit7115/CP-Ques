#include<iostream>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    s+='#';
    int i=2;
    bool flag=false;
    while(i!=s.size()){
        if(s[i-1]!=s[i]){
            flag=true;
            break;
        }
        i+=3;
    }
    if(!flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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