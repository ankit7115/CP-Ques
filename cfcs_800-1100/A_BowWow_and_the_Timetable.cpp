#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    string s;
    cin>>s;
    //reverse(all(s));
    int count=0,c=0;
    for(int i=0;i<s.size();i++){
        
            if(s[i]=='1'){
                count++;
            }
        
    }
    if(count==1){
        cout<<(s.size()/2);
    }
    else{
        if(s.size()==1 or s[0]=='0')
        cout<<0;
        else if(s.size()%2!=0)
        cout<<(s.size()/2)+1;
        else{
            cout<<(s.size()/2);
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
    // }
    return 0;
}