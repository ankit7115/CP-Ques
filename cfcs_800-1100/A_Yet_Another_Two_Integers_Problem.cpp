#include<iostream>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    long long a,b;
    cin>>a>>b;

    if(a>b){
        long long temp=a;
        a=b;
        b=temp;
    }
    if((b-a)%10==0){
        cout<<(b-a)/10;
    }
    else{
         cout<<((b-a)/10)+1;
    }
    cout<<"\n";
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