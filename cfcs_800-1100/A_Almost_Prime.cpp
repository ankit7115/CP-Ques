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
bool isAlprime(int n){
vector<int>prime;
    for(int i=2;i<=3000;i++){
        if(isPrime(i)){
            prime.push_back(i);
        }
    }
    int count=0;
    for(int i=0;i<prime.size();i++){
        if(n%prime[i]==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}
void solve(){
    int n;
    cin>>n;
    int count=0;
    for(int i=6;i<=n;i++){
        if(isAlprime(i)){
            count++;
        }
    }
    cout<<count;

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