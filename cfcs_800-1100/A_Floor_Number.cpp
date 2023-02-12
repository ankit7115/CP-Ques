#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,x;
    cin>>n>>x;

    int apartment=0;
    for(int i=1;;i++){
        if(i==1){
            apartment+=2;
        }
        else{
            apartment+=x;
        }
        if(apartment>=n){
            cout<<i<<"\n";
            break;
        }

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