#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n,d;
    cin>>n>>d;
    if(n==1 or n==3 or n==5 or n==7 or n==8 or n==10 or n==12){
        if(d<=5){
            cout<<5;
        }
        else{
            cout<<6;
        }
    }
    else if(n==2){
        if(d==1){
            cout<<4;
        }
        else
        cout<<5;
    }
    else{
        if(d<=6){
            cout<<5;
        }
        else{
            cout<<6;
        }
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
    
    //return 0;
}