#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
   int n,m,k;
   cin>>n>>m>>k;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   } 
   int i,j;
   i=m-2;
   j=m;
   int min1=INT_MAX,min2=INT_MAX;
   for(int l=i;l>=0;l--){
    if(arr[l]!=0 and arr[l]<=k){
        min1=m-l-1;
        break;
    }
   }
   for(int l=j;l<n;l++){
    if(arr[l]!=0 and arr[l]<=k){
        min2=l-m+1;

       // cout<<l<<" "<<min2<<endl;
        break;
    }
   }
   int res=min({min1,min2});
   cout<<res*10<<endl;
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