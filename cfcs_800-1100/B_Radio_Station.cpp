#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;
    string s1,s2;
    vector<pair<string,string>>arr,vec;
    pair<string,string> p;

    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        p=make_pair(s1,s2);
        arr.push_back(p);
    }
     for(int i=0;i<m;i++){
        cin>>s1>>s2;
        s2.erase(s2.begin()+s2.size()-1);
        p=make_pair(s1,s2);
        vec.push_back(p);
    }
    
    for(auto it:vec){
        cout<<it.first<<" "<<it.second<<"; #";
        for(auto itt:arr){
            if(itt.second==it.second){
                cout<<itt.first;
                break;
            }
        }
        cout<<endl;
    }

    return 0;
}