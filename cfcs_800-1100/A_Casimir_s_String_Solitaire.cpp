#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            a++;
        }
        else if(s[i]=='B'){
            b++;
        }
        else{
            c++;
        }
    }
    if(b==(a+c)){
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