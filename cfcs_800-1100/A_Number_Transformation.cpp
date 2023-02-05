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
        int x,y;
        cin>>x>>y;
        if(y%x==0){
            cout<<1<<" "<<y/x;
            //continue;
        }
        else if(x%2==0 && y%2!=0){
            cout<<0<<" "<<0;

        }
        else if(x%2!=0 && y%2==0){
            cout<<0<<" "<<0;
        }
        else{
            cout<<0<<" "<<0;
        }
        cout<<"\n";
    }
    return 0;
}