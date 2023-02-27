#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;

    int arr[n];
    int count=0,countodd=0;
    int indexi;
    int indexo;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]&1){
            countodd++;
            indexi=i+1;
        }
        else{
            count++;
            indexo=i+1;
        }
    }
    if(countodd==1){
        cout<<indexi;
    }
    else if(count==1){
        cout<<indexo;
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