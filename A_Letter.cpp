#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,m;
    cin>>n>>m;

    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
             if(arr[i][j]=='*'){
                cout<<arr[i][j]<<arr[i][j+1]<<arr[i][j+2]<<"\n";
                break;
                }
    }
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
    // }
    return 0;
}