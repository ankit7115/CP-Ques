#include<bits/stdc++.h>
using namespace std;

//#define long long int
#define all(x) (x).begin(), (x).end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t;
    cin>>t;

    while(t--){
    int a,b;
    cin>>a>>b;
    int count=0;
    int t=a;
    while(a>=b || a!=0){
        a=a/b;
        count++;
        if(a==b || a==t){
            b=b+1;
            count++;
            t=a;
        }
    }
    
    cout<<count<<"\n";

    }

    return 0;
}