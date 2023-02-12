#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum=0;
    for(int i=s.size()-1;i>=0;i--){
        if(i==s.size()-1){
        if(s[i]!='0'){
            sum+=(s[i]-48);
        }
        }
        else{
        if(s[i]!='0'){
            sum+=(s[i]-48)+1;
        }   
        }
    }  
    cout<<sum<<"\n";
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