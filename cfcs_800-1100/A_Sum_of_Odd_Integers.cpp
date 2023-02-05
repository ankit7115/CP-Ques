#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        if((sqrt(n)<k)){
            cout<<"NO\n";
            continue;
        }
        if(n%2==0 and k%2==0){
            cout<<"YES\n";
        }
        else if(n%2==0 and k%2!=0){
            cout<<"NO\n";
        }
        else if(n%2!=0 and k%2==0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}