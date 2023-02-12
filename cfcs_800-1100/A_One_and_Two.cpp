#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(mp.size()==1 and mp[2]==0){
        cout<<1<<"\n";
    }
    else if(mp[2]%2!=0){
        cout<<"-1\n";
    }
    else{
        int count=mp[2];
        count/=2;
        int temp=0;
        for(int i=0;i<n;i++){
            if(arr[i]==2){
                temp++;
            }
            if(temp==count){
                cout<<i+1<<"\n";
                break;
            }
        }
    }
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