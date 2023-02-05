#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<int,int>>vec;
    pair<int,int> p,temp;
    p=make_pair(1,1);
    int k=0,l=0;
    // temp=make_pair(k,l);
    // int lc=0,rc=0,uc=0,dc=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            temp=make_pair(++k,l);
            vec.push_back(temp);
        }
        else if(s[i]=='R'){
            temp=make_pair(k,++l);
            vec.push_back(temp);
        }
        else if(s[i]=='L'){
          temp=make_pair(k,--l);
            vec.push_back(temp);
        }
        else{
           temp=make_pair(--k,l);
            vec.push_back(temp);
        }
    }
    auto it=find(all(vec),p);
    if(it!=vec.end()){
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