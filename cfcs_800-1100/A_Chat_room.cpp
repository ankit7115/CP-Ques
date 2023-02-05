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
    int k=0;
    string t="hello";
    int flag=0;
    for(int i=0;i<t.size();i++){
        char p=t[i];
        for(int j=k;j<s.size();j++){
            if(p==s[j]){
                flag++;
                k=j+1;
                break;    
            }
        }
    }
    if(flag==5){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}