#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    vector<int> str;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>=97 && s[i]<=122){
            str.push_back(s[i]);
        }
    }
    sort(all(str));
    int it=unique(all(str))-str.begin();
    cout<<it;

    return 0;
}