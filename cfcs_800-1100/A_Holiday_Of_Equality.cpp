#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
   int n;
   cin>>n;
   int maxt=INT_MIN;
   int arr[n];
    long long result=0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    maxt=max({maxt,arr[i]});
   }
    for(int i=0;i<n;i++){
         result+=abs(maxt-arr[i]);
    }
    cout<<result;

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