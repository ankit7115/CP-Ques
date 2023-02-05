#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int init=arr[0];
    int count=1;
    int rev=INT_MIN;
    
    for(int i=1;i<n;i++){
        if(arr[i]>init){
            count++;
            rev=max({count,rev});
        }
        else{
            count=1; 
        }
        init=arr[i];
    }
    cout<<max({count,rev})<<"\n";
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