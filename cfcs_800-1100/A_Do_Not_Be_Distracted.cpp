#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    string s,str;
    cin>>s;
    int flag=0;
    // str=s;
    // sort(all(str));
    // auto it =unique(all(str))-str.begin();
    // if(it==1 or it==n){
    //     cout<<"YES\n";
        
    // }
    // else{
    //     cout<<"NO\n";
    // }
    
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){    
        auto it=find(s.begin()+i+1,s.end(),s[i]);
        if(it!=s.end()){
            flag=1;
            break;
        }
        }   
    }
    if(flag==1){
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