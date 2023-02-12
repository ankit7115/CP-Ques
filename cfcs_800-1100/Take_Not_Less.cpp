#include<bits/stdc++.h>
#define ll long long;
#define all(x) (x).rbegin(),(x).rend()

using namespace std;
// bool compare(pair<int,int>a,pair<int,int>b){

// }

void you_can_definitely_do(){
    int n;
    cin>>n;
    
    int arr[n];
    map<int,int> m;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    vector<pair<int,int>>vec;
    for(auto it:m){
        vec.push_back(make_pair(it.first,it.second));
    }
    bool flag=true;
    sort(all(vec));

     for(auto it:vec){
        if(it.second%2!=0){
            cout<<"Marichka"<<endl;
            flag=false;
            break;
        }
    }
     if(flag)
     cout<<"Zenyk"<<endl;
    
    

    // if(n==1){
    //     
    //     return;
    // }
    // int it=unique(arr,arr+n)-arr;
    // if(it==1){
    //     if(n%2==0){
    //         cout<<"Zenyk\n";
    //     }
    //     else{
    //         cout<<"Marichka\n";
    //     }
    // }
    // else{
    //     cout<<"Marichka\n";
    // }
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
        you_can_definitely_do();
    }
}