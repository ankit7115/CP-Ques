#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    if(n%2==0){
         if(!isPrime(n/2) ){
           cout<<n/2<<" "<<n/2;
        }
        else{
            cout<<n/2-1<<" "<<n/2+1;
        }
    }
    else{
        if(!isPrime(n/2) and ! isPrime((n/2)+1)){
            cout<<n/2<<" "<<(n/2)+1;
        }
        else if(!isPrime(n/2) or !isPrime((n/2)+1)){
            cout<<(n/2)-2<<" "<<(n/2)+3;
        }
        else{
            cout<<(n/2)-2<<" "<<(n/2)+3;
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