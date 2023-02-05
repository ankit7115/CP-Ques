#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    
    int st2=(k*l)/nl;
    int st3=c*d;
    int st4=p/np;
    
    int ans=min({st2,st3,st4});
    cout<<ans/n;
    return 0;
}