#include<iostream>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    string s;
    cin>>s;
    bool flag=false;
    if(s.size()%2!=0){
        cout<<"NO\n";
    }
    else{
        for(int i=0;i<s.size()/2;i++){
            if(s[i]==s[(s.size()/2)+i]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
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