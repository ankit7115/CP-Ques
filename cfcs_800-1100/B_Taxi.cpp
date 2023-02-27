#include<iostream>
#include<algorithm>
#include<map>

using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    int count=0;
    count=mp[4];
    count+=(mp[2])/2;
    count+=mp[3];
    if(mp[3]>=mp[1]){
        mp[1]=0;
    }
    else{
        mp[1]-=mp[3];
    }
    
    if(mp[2]%2!=0 and mp[1]==1){
        count+=1;
        mp[1]-=1;
    }
    else if(mp[2]%2!=0 and mp[1]>=2){
        count+=1;
        mp[1]-=2;
    }
    else if(mp[2]%2!=0){
        count+=1;
    }
    if(mp[1]%4==0){
        count+=mp[1]/4;
    }
    else{
        count+=(mp[1]/4)+1;
    }

    cout<<count;

}
