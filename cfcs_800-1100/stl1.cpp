#include<bits/stdc++.h>
#define add(x) x+x
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    int n;
    cin>>n;
    string str;
    vector<string> s;
    for(int i=0;i<n;i++){
        cin>>str;
        s.push_back(str);
    }
    vector<pair<string,int>> vp;
    for(int i=0;i<n;i++){
        vp.push_back(make_pair(s[i],s[i].size()));
    }
    for(auto p:vp){
        cout<<p.first<<" "<<p.second<<endl;
    }
}