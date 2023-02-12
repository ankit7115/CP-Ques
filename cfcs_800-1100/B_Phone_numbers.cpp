#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(!(n&1)){
        cout<<s[0];
    for(int i=2;i<=s.size();i++){
        
        cout<<s[i-1];
        if(i!=s.size())
            if((i)%2==0){
                cout<<"-";
      }  
    }
    }
    else{
         cout<<s[0];
    for(int i=2;i<=s.size();i++){
        
        cout<<s[i-1];
        if(i!=s.size()-1)
            if((i)%2==0){
                cout<<"-";
      }  
    }
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