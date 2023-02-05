#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
   int n,x;
   cin>>n;
   
   int rem=0;
   for(int i=0;i<n;i++){
    cin>>x;
    rem+=x;
   } 
   
   cout<<fixed<<setprecision(12)<<(rem*1.0/n);

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