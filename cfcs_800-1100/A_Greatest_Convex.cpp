#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int fact(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        for(int i=10;i>=1;i){
            if((fact(i)+fact(i-1))%n==0){
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}