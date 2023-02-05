#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    
    map<char,int>m;

    
    string s;
    cin>>s;

    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }
    
    bool found=false;
    int maxi=INT_MIN;
    for(int i=0;i<s.size();i++){
        maxi=max({m[s[i]],maxi});   
    }
    for(int i=0;i<s.size();i++){
    if(m[s[i]]==maxi){
            found=true;
            cout<<"frequent character: "<<s[i];
            break;
        }
    }
    if(found==false){
        cout<<"NOT found";
    }
    
    //cout<<endl;

    // auto it=m.end();
    // --it;

    // cout<<"most frequent character: "<<(*it).first;
}