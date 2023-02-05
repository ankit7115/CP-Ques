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
    vector<pair<int,int>>p;
    int x,y;
    while(t--){
    cin>>x>>y;
    p.push_back(make_pair(x,y));
    }
    int count=0;
    for(auto it:p){
        if(it.second-it.first>=2){
            count++;
        }
    }
    cout<<count;
    return 0;
}