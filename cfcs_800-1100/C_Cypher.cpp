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
        int n;
        cin>>n;
        int arr[n];
        vector<int> ans;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
        int m;
        cin>>m;
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='D'){
                arr[i]++;
                if(arr[i]>9){
                    arr[i]=0;
                }
            }
            else{
                arr[i]--;
                if(arr[i]<0){
                    arr[i]=9;
                }
            }
        }
        ans.push_back(arr[i]);
        }
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}