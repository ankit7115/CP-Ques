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
        ll n,k;
        cin>>n>>k;
        ll c=0;
        if(k>n){
            cout<<n<<endl;
            continue;
        }
        while(n!=0){
            if(n%k==0){
                c++;
                n=n/k;
            }
            else{
                c=c+(n%k);
                n=n-(n%k);
            }
            
            
        }
        cout<<c<<"\n";
    }
    return 0;
}