#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    int count=m.size();
    for(auto it:m){
        if(it.second>=2){
            count++;
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