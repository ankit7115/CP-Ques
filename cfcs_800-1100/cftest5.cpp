#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int x;
        vector<int> vec;
        for(int i=0;i<s.size();i++){
            x=s[i]-48;
            vec.push_back(x);
        }
        long long sum1=0,sum2=0;
        for(int i=0;i<vec.size()/2;i++){
            sum1=sum1+vec[i];
            sum2=sum2+vec[5-i];
        }
        if(sum1!=sum2){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}