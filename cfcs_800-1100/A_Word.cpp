#include<iostream>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void UpperToLower(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>=97 and s[i]<=122){
            cout<<s[i];
        }
        else{
            cout<<char(s[i]-65+97);
        }
    }
}
void lowerToUpper(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 and s[i]<=90){
            cout<<s[i];
        }
        else{
            cout<<char(s[i]-97+65);
        }
    }
}

void solve(){
    string s;
    cin>>s;
    int up=0,low=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>=97 and s[i]<=122){
            low++;
        }
        else{
            up++;
        }
    }
    //cout<<up<<" "<<low;
    if(up>low){
        lowerToUpper(s);
    }
    else{
        UpperToLower(s);
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
    // }
    return 0;
}