#include<bits/stdc++.h>


using namespace std;
bool compare(pair<int,int> a,pair<int,int> b){
 return a.second<b.second;
}
//aa=(a+b)-(b=a)

int main(){
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);

    int n;
    cin>>n;
    // vector<int> arr;
    // int x;
    // for(int i=0;i<n;i++){
    //    cin>>x;
    //    arr.push_back(x); 
    // }
    // sort(arr.begin(),arr.end(),compare);
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    //m[1]=2;log(n)
    vector<pair<int ,int>> p;
    for(int i=1;i<=n;i++){
        p.push_back(make_pair(n-i,i));
    }
    
    for(auto it:p){
    cout<<" "<<it.first<<" "<<it.second<<endl;
    }
    sort(p.begin(),p.end());
    cout<<endl;
    
    for(auto it:p){
    cout<<" "<<it.first<<" "<<it.second<<endl;
    }
    sort(p.begin(),p.end(),compare);
    cout<<endl;
    for(auto it:p){
    cout<<" "<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}