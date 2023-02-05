#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    string k;
    cin>>k;
    //int t=k;
    vector<int> ass;
    int flag=0;
    for(int i=0;i<n;i++){
      
      if(k[i]=='7'){
      ass.push_back(7);
      }  
      else if(k[i]=='4'){
      ass.push_back(4);
      }  
      else{
        flag=1;
        break;
      }
    }
    if(flag==1){
        cout<<"NO";
    }
    else{
    ll sum1,sum2;
    sum1=accumulate(ass.begin(),ass.begin()+ass.size()/2,0);
    sum2=accumulate(ass.begin()+ass.size()/2,ass.end(),0);
    if(sum1==sum2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
    return 0;
}