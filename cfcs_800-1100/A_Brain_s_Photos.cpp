#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='C' or arr[i][j]=='M' or arr[i][j]=='Y'){
                found=1;
            }
        }
    }
    if(found==0){
        cout<<"#Black&White";
    }
    else{
        cout<<"#Color";
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