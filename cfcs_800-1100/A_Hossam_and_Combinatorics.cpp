#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin>>n;
    //vector<int> arr;
    map<int,int>mp;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        //arr.push_back(x);
        mp[x]++;
    }
    auto it1=mp.begin();
    auto it=--mp.end();
    ll mul=n;
    mul*=(n-1);
    if(mp.size()==1){
        cout<<mul<<"\n";
    }
    else{
        int maxf=(*it1).second;
        int minf=(*it).second;
        mul=maxf;
        mul*=minf;
        cout<<mul*2<<"\n";

    }
//     int max=*max_element(all(arr));
//     int min=*min_element(all(arr));
//     int ans;
//    if(max==min){
//     ans=n*(n-1);
//    }
//    else{
//     int freqmax;
//     int freqmin;
//    }
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