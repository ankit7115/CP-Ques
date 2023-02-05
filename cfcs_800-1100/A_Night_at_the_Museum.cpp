#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
   string s;
   cin>>s;
   int sum=0;
   char init='a';
   int front=0,back=0x;
   for(int i=0;i<s.size()-1;i++){
    
    for(int i=init;i!='z'+1;i++){
        front++;
    }
    for(int i=init;i!=s[i+1];i--){
    if(i=='a'){
        i='z'+1;
    }
        back++;
    }
     init=s[i];
     sum+=min({front,back});
   } 
   cout<<sum;
  
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