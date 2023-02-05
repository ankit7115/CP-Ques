#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int t1,t2;
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0){
            t1=n/i;
            break;
        }
    }
    t2=n/t1;
    cout<<t2<<" "<<t1<<"\n";
    return 0;
}