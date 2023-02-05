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
    t=t/2;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b){
            if(c>d)
            cout<<"Happy Alex\n";
        }
        else{
            cout<<"Poor Alex\n";
        }
        
    }

    return 0;
}