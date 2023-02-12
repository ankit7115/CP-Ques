#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<char> even;
    vector<char> odd;

    for(int i=0;i<s.size();i++){
        if((s[i]-48)%2==0){
            even.push_back(s[i]);
        }
        else{
            odd.push_back(s[i]);
        }
    }
    if(even.size()==odd.size()){
        for(int i:even){
            cout<<i;
        }
        for(int i:odd){
            cout<<i;
        }
    }
    else if(odd.size()%2==0){
         for(int i:even){
            cout<<i;
        }
        for(int i:odd){
            cout<<i;
        }
    }
    else{
         for(int i:even){
            cout<<i;
        }
        for(int i=0;i<odd.size()-1;i++){
            cout<<i;
        }
    }
    cout<<"\n";
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