#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int n;
    cin>>n;
    int f4=0;
    int f7=0;
    while(n!=0){
        if(n%10==4){
            f4=1;
        }
        else if(n%10==7){
            f7=1;
        }
        else{
            f4=0;
            f7=0;
            break;
        }
        n/=10;
    }
    if(f4==1 and f7==1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
    return 0;
}