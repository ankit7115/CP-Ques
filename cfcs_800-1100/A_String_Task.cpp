#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    string str;
    cin>>str;
    char c='.';
    vector<char> s;
    for(int i=0;i<str.size();i++){
        s.push_back(str[i]);
    }
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' ||s[i]=='A' ||s[i]=='e' ||s[i]=='E' ||s[i]=='i'||s[i]=='I' ||s[i]=='o' ||s[i]=='O' ||s[i]=='u'||s[i]=='U' ||s[i]=='y'||s[i]=='Y'){
           s.erase(s.begin()+i);
            i--;
        }
        else{
            s.insert(s.begin()+i,c);
            i++;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 and s[i]<=90){
            s[i]=s[i]-65+97;
        }
    
    }
    for(char i:s){
        cout<<i;
    }
    return 0;
}