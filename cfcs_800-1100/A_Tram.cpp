#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t;
    cin>>t;
    int ans=0,max=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        ans-=a;
        ans+=b;
        if(max<ans){
            max=ans;
        }
    }
    cout<<max;
    return 0;
}