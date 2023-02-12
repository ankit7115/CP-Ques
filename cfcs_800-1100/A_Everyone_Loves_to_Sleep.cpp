#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

// bool compare(pair<int,int>a,pair<int,int>b){
//     if()
// }

void solve(){
    int n,h,m;
    cin>>n>>h>>m;

    vector<pair<int,int>>vec;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    //sort(all(vec),compare);

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