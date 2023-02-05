#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n;
    int tp=1;
    vector<int> arr;
    vector<int> tops;
        cin>>x;
        arr.push_back(x);
    for(int i=0;i<2*n-1;i++){
        cin>>x;
        tops.push_back(tp);
        auto it=find(arr.begin(),arr.end(),x);
        if(it!=arr.end()){
            arr.erase(it); 
            tp--;
        }   
        else{
           arr.push_back(x);
            tp++;
        }
    }
    cout<<*max_element(tops.begin(),tops.end());

}