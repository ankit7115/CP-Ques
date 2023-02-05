#include<bits/stdc++.h>
using namespace std;
#define long long int
#define all(x) (x).begin(), (x).end()
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n,flag;
        cin>>n;
        vector<int> arr,brr;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
            brr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        if(arr[0]!=arr[1]){
            flag=arr[0];
        }
        else{
            flag=arr[arr.size()-1];
        }
        for(int i=0;i<n;i++){
            if(brr[i]==flag){
                cout<<i+1<<"\n";
            }
        }
    }
    return 0;
}