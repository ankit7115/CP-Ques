#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

// bool solve(){
//     string s;
//     cin>>s;
//     int a,b;
//     cin>>a>>b;
//     if(a<2400){
//         return false;
//     }
//     else if(a>=2400 and b<=a){
//         return false;
//     }
//     else{
//         return true;
//     }
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    vector<pair<int,int>>vec;
    bool flag=false;
    while(t--){
        string s;
        cin>>s;
        int a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    for(auto it:vec){
        if(it.first<2400){
            flag=false;
        }
        else if(it.first>=2400 and it.first>=it.second){
            flag=false;
        }
        else{
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}