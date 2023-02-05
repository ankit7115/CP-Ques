#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    string s;
    int flag=0;
    cin>>s;
    if(s.size()==1){
        cout<<0;
        exit(0);
    }
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='.'){
            cout<<0;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            cout<<1;
            i++;
            if(i==s.size()-1)
              flag=1;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            cout<<2;
            i++;
        }
    }
    if(s[s.size()-1]=='.' && flag!=1){
        cout<<0;
    }
    return 0;
}