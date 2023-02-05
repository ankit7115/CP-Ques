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
    while(t--){
        string s;
        cin>>s;
        cout<<s[0];
        for(int i=1;i<s.size();i++){
        if(i%2!=0){
        cout<<s[i];
        }
        }

        cout<<"\n";
    }
    return 0;
}