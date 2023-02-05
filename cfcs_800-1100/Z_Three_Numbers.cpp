#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k,s;
    cin>>k>>s;
    int count=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            if(s-i-j>=0 and s-i-j<=k){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}   