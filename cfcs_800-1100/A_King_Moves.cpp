#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    char c,d;
    cin>>c>>d;
    if((d=='1' || d=='8') && c!='a' && c!='h'){
        cout<<5;
    }
    else if((c=='a' || c=='h') && d!='1' && d!='8'){
        cout<<5;
    }
    else if((c=='a' and (d=='1' or d=='8')) or (c=='h' and (d=='1' or d=='8'))){
        cout<<3;
    }
    else{
        cout<<8;
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