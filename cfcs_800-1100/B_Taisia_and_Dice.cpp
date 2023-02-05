#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,s,r,dif;
    cin>>n>>s>>r;

    vector<int> vec;
    vec.push_back(s-r);
    int div=r/(n-1);
    int rem=r%(n-1);
    if( div+rem>(s-r)){
        dif = div+rem-(s-r);
        vec.push_back(div+rem-dif);
        for(int i=0;i<n-2;i++){
        vec.push_back(div);
    }
    for(int i=2;i<2+dif;i++){
        vec[i]+=1;
    }
    }
    else{

        vec.push_back(div+rem);

        for(int i=0;i<n-2;i++){
        vec.push_back(div);
        }
    
    }
    
    
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    
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