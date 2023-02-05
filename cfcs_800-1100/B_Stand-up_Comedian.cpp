#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    int joke=a1;
    int alice=a1,bob=a1;
    for(int i=0;i<a2;i++){
        if(bob==-1){
            for(int j=0;j<a3;j++){
                bob++;
                alice--;
                joke++;
                if(alice==-1){
                    break;
                }
            }
            break;
        }
        bob--;
        alice++;
        joke++;
    }
     for(int i=0;i<a3;i++){
        if(alice==-1){
            for(int j=0;j<a3;j++){
                alice++;
                bob--;
                joke++;
                if(bob==-1){
                    break;
                }
            }
            break;
        }
        alice--;
        bob++;
        joke++;
    }
   
    cout<<joke<<endl;
}
    

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    solve();
    }
    return 0;
}