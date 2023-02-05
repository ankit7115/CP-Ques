#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n%10!=0){
            n-=1;
        }
        else{
            n/=10;
        }
    }
    cout<<n;
    
    return 0;
}