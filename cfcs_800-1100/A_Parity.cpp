#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int a,k;
    cin>>a>>k;
    int arr[k];
    int odd=0;
    for(int i=0;i<k;i++){
        cin>>arr[i];
        if(arr[i]&1){
            odd++;
        }
    }
    if(a%2==0 and arr[k-1]%2==0){
        cout<<"even";
    }
    else if(a%2==0 and arr[k-1]%2!=0){
        cout<<"odd";
    }
    else{
        if(odd%2!=0){
            cout<<"odd";
        }
        else{
            cout<<"even";
        }
    }
    // ll sum=0;
    // int j=k-1;
    // for(int i=0;i<k;i++){
    //     sum+=arr[i]*pow(a,j);
    //     j--;
    // }
    // if(sum&1){
    //     cout<<"odd";
    // }
    // else{
    //     cout<<"even";
    // }
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