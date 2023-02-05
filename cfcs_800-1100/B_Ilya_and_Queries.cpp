#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    int q;
    cin>>q;
    while(q--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        for(int i=n-1;i<k-1;i++){
            if(s[i]==s[i+1]){
                ans++;
            }
            
        }
        cout<<ans<<"\n";
    }
    return 0;
}