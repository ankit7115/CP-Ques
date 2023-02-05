#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            v.push_back(s[i]-48);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1){
            cout<<"+";
        }
    }
    return 0;
}