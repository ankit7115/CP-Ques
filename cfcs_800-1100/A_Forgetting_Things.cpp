#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int a,b;
    cin>>a>>b;
    if(a==9 and b==1){
        cout<<9<<" "<<10<<"\n";
        return;
    }
    if(abs(b-a)>1){
        cout<<-1;
    }
    else if(b-a==1){
        cout<<a<<9<<" "<<b<<0;
    }
    else if(a-b==1){
        cout<<-1;
    }
    else{
        cout<<a<<2<<" "<<b<<3;
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