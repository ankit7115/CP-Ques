#include<iostream>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    int even,odd,temp1,temp2;
    if(n&1){
        temp1=n/2+1;
        temp2=n/2;
        even=temp2*(temp2+1);
        odd=temp1*temp1;
    }
    else{
        temp2=n/2;
        even=temp2*(temp2+1);
        odd=temp2*temp2;
    }
    cout<<even-odd;
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