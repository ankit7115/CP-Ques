#include<iostream>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    
    cin>>n;
    if(n&1){
        cout<<n<<" ";
    for(int i=n-1;i>=1;i--){
        if(i==n/2+1){
            continue;
        }
        cout<<i<<" ";
    }
    cout<<n/2+1;
    cout<<"\n";
    }
    else{
        cout<<n<<" ";
    for(int i=n-1;i>=1;i--){
        if(i==n/2){
            continue;
        }
        cout<<i<<" ";
    }
    cout<<n/2;
    cout<<"\n";
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