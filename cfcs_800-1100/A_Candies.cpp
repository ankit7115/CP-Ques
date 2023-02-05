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
        int n;
        cin>>n;
        int kk;
        for(int k=2;;k++){
            kk=pow(2,k)-1;
            if(n%kk==0){
                cout<<n/kk<<"\n";
                break;
            }
        }
        
    }
    return 0;
}