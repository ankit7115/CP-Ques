#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;

    vector<int>arr;
    int x;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
        mp[x]++;
    }
    int count=0;
   // sort(all(arr));
    for(int i=0;i<n;i++){
        if(mp.size()==n-i){
            cout<<count<<"\n";
            break;
        }
        else{
            mp.clear();
            for(int j=i+1;j<n;j++){
                mp[arr[j]]++;
            }
            count++;
        }
       
    }
    mp.clear();
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