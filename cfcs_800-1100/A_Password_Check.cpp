#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    string s;
    cin>>s;
    int cl=0,sl=0,sp=0,dg=0;
    if(s.size()<5){
        cout<<"Too weak";
    }
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 and s[i]<=90){
                cl++;
            }
            if(s[i]>=97 and s[i]<=122){
                sl++;
            }
            if(s[i]=='!' or s[i]== '?' or s[i]== '.' or s[i]== ',' or s[i]== '_'){
                sp++;
            }
            if(s[i]>=48 and s[i]<=57){
                dg++;
            }
            if(cl>0 and sl>0  and dg>0){
                cout<<"Correct";
                exit(0);
            }
        }
        cout<<"Too weak";
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
    //}
    return 0;
}