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
    int flag=0;
    if(s.size()==1){
        flag=1;
    }
    for(int i=1;i<s.size();i++){
        if(((s[0]>=97 &&s[0]<=122) ||(s[0]>=65 && s[0]<=90)) &&(s[i]>=65&&s[i]<=90)){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<s;
    }
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                s[i]=s[i]-65+97;
            }
            else{
                s[i]=s[i]-97+65;
            }
        }
        cout<<s;
    }
    return 0;
}   