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
    bool flip=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1] and arr[i]==-1){
            arr[i]*=-1;
            arr[i+1]*=-1;
            flip=true;
            break;
        }
    }
    if(!flip){
        for(int i=0;i<n-1;i++){
        if(((arr[i]==1 and arr[i+1]==-1) or (arr[i]==-1 and arr[i+1]==1))){
            arr[i]*=-1;
            arr[i+1]*=-1;
            flip=true;
            break;
        }
    }
    }
    if(!flip){
        for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1] and (arr[i]==1 and arr[i+1]==1)){
            arr[i]*=-1;
            arr[i+1]*=-1;
            flip=true;
            break;
        }
    }
    }
    cout<<accumulate(arr,arr+n,0)<<"\n";

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