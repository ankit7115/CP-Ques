#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sareja=0,dima=0;
    int l=0,r=n-1;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            if(arr[l]>arr[r]){
            sareja+=arr[l];
            l++;
            }
            else{
                sareja+=arr[r];
                r--;
            }
        }
        else{
            if(arr[l]>arr[r]){
            dima+=arr[l];
            l++;
            }
            else{
               dima+=arr[r];
                r--;
            }
        }
    }
   cout<<sareja<<" "<<dima;
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