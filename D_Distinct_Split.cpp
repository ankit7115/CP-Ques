#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
     map<char,int>mp;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int count1=0,count2=0;
    for(auto it:mp){
        if(it.second%2==0){
            count1+=1;
            count2+=1;
        }
        else if(it.second==1){
            count1+=1;
            
        }
        else{
            count1+=1;
            count2+=1;
        }
    }
    cout<<count1+count2<<"\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    solve();
    }
    return 0;
}