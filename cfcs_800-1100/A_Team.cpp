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
    int count=0;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count++;
        }
        
    }
    cout<<count;
    return 0;
}