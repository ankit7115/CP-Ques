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
        int a,b,c;
        cin>>a>>b>>c;
        if(a!=min({a,b})){
            int t=a;
            a=b;
            b=t;
        }
        int check2;
        
        check2=b-c;
        if(b-a==check2+b-c){
            cout<<b+check2<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
        
    }
    return 0;
}