//3141592653589793238462643383279.
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()


void solve(){
    string s,st;
    string str="314159265358979323846264338327";
    int count=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==str[i]){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
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