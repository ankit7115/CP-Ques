#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
   ll n,k;
   cin>>n>>k;

   ll smove=0,lmove=0;
   while(n>=k){
        if(n>=k){
            smove++;
        }
        n-=k;
        if(n>=k){
            lmove++;
        }
        n-=k;
   }
   if(smove>lmove){
    cout<<"YES";
   }else{
    cout<<"NO";
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