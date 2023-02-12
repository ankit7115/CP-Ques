#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
bool isPalindrome(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[s.size()-1-i]){
            return false;
        }
    }
    return true;
}

void solve(){
    string s;
    cin>>s;
    if(!isPalindrome(s)){
        cout<<s.size();
    }
    // else if(!allIdentical(s)){
    //     cout<<0;
    // }
    else{
        cout<<s.size()-1;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--){
    solve();
    //}
    return 0;
}