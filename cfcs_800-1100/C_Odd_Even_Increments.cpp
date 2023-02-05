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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int eec=0,eoc=0,oec=0,ooc=0;
        for(int i=0;i<n;i++){
            if(i+1%2==0){
                if(arr[i]%2==0){
                    eec++;
                }
                else{
                    eoc++;
                }
            }
            else{
                if(arr[i]%2==0){
                    oec++;
                }
                else{
                    ooc++;
                }
            }
        }
        //if()
    }
    return 0;
}