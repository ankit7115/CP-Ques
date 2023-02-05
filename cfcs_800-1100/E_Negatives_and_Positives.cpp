#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;

    ll arr[n];
    int neg=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            neg++;
        }
        
    }
    ll sum=0;
    sort(arr,arr+n);
    if(neg%2==0){
        for(int i=0;i<n;i++){
            sum+=abs(arr[i]);
        }
        cout<<sum<<"\n";
        return;
    }
    else{
        int x=arr[neg-1];
        if(abs(x)>arr[neg]){
            x=arr[neg];
        }
         for(int i=0;i<n;i++){
            sum+=abs(arr[i]);
        }
        cout<<sum-abs(2*x)<<"\n";
    
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